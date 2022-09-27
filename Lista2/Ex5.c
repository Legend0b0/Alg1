#include <stdio.h>

int
main()
  {
  int n;
  
  printf("Digite um numero\n");
  scanf("%d", &n);
  
  if((n % 2) == 0)
    {
    printf("Eh numero par ");
    }
  else
    {
    printf("Eh numero impar ");
    }

  if(n >= 0)
    {
    printf("positivo\n");
    }
  else
    {
    printf("negativo\n");
    }

  return 0;
  }
