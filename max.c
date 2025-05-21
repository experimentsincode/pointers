#include <stdio.h>

#define N 10

int *max(int *a, int *b)
{
  if (*a > *b)
    return a;
  else
    return b;
}

int main()
{
  int i, j, *p;

  scanf("%d", &i);
  scanf("%d", &j);

  p = max(&i, &j);

  printf("Biggest: %d\n", *p);
  return 0;
}
