#include <stdio.h>
#include <stdlib.h>
int f (int n) {
  int ans = 0;
  for (int i = 1; i < n; i++) {
    if (i < n/2) {
      ans -= i;
    }
    else {
      ans += i;
    }
  }
  return ans;
}

int g (int x, int n) {
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      x *= i + 1;
      continue;
    }
    x--;
    if (x == 0) {
      break;
    }
  }
  return x;
}


int main()
{
    int r= f(5);
    int r2= g(1, 3);
    printf("%d\n",r);
    printf("%d",r2);

    return 0;
}
