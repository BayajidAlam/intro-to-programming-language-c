#include <stdio.h>

int main()
{

  int a[5] = {10,
              20,
              30,
              40,
              50};

  printf("%d\n", a[0]);
  printf("%d", *(a + 1));
  return 0;
}