#include <stdio.h>

int
main()
  {
  int n;

  printf("Digite o um numero inteiro\n");
  scanf("%d", &n);

  if((n < 60) && (n >= 0))
    {
    n++;
    }
  else
    {
    n = 0;
    }
  
  printf("Sucessor: %d\n", n);

  return 0;
  }
