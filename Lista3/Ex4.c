#include <stdio.h>

int
main()
  {
  int n;

  printf("Digite um numero\n");
  scanf("%d", &n);

  if(n % 3 == 0)
    {
    printf("Eh multiplo de 3\n");
    }
  else
    {
    printf("Nao eh multiplo de 3\n");
    }

  return 0;
  }