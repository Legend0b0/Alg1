#include <stdio.h>
#include <math.h>

int
main()
  {
  int n;

  printf("Digite um numero\n");
  scanf("%d", &n);

  if(n >= 0)
    {
    n = pow(n, 2);
    printf("Quadrado: %d\n", n);
    }
  else
    {
    n = pow(n, 3);
    printf("Cubo: %d\n", n);
    }

  return 0;
  }

