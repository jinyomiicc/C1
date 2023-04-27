#include <stdio.h>

int main()
{
  int x;
  int y;

  printf("x값을 입력하시오 :");
  scanf("%d", &x);

  y = x*x - 5*x + 6;

  printf("%d", y);
  return 0;
}