#include <stdio.h>
#include <stdlib.h>
void f (int x, int y) {
  while (x < y) {
    printf("%d ", y - x);
    x = x + 1;
    y = y - 1;
  }
}
int main()
{
     f(-1, 4);

    return 0;
}
