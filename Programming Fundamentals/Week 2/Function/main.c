#include <stdio.h>
#include <stdlib.h>

int myFunction(int n) {
  int x = n * 2;
  int y = (x + 1) % 3;
  return y - x;
}

int g (int x, int y) {
  x = x + y;
  int z = 2 * x - y;
  return z;
}

int main()
{

    int r = myFunction(5) ;
    int r2= g(-2, 5);
    printf("%d\n",r);
    printf("%d\n",r2);

    return 0;
}
