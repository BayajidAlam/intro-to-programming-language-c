#include <stdio.h>

void sum(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  int sum = a + b;
  printf("sum: %d\n", sum);
}
int main()
{

  sum();
  return 0;
}