#include <stdio.h>
#include <stdlib.h>
int g (int x, int y) {
  switch(x - y) {
  case 0:
    return x;
  case 4:
    y = y + 1;
    break;
  case 7:
    x = x - 1;
  case 9:
    return x*y;
  case 3:
    y = x + 9;
  default:
    return y - x;
  }
return y;
}
int f (int x, int y) {
  if (x + 2 < y) {
    x = x + 3;
    return y * x;
  }
  else {
    return x + y + 2;
  }
}
int main()
{
 int r = g(3, 0);
 int r2 = f(5,10);
 printf("%d",r);
 printf("%d",r2);
 return 0;
}
