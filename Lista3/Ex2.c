#include <stdio.h>

int
main()
  {
  int x, y, aux;

  printf("Digite o valor de X e Y\n");
  scanf("%d %d", &x, &y);

  if(x > y)
    {
    aux = x;
    x = y;
    y = aux;
    }

  printf("X: %d\nY: %d\n", x, y);
  return 0;
  }