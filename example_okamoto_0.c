#include<stdio.h>
  
int main(void)
{
  int a, b, tmp;
  scanf("%d %d", &a, &b);
  tmp = b;
  b = a;
  a = tmp;
  printf("a = %d, b = %d", a, b);
  return 0;
}
