#include <stdio.h>
#include <stdlib.h>
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
    n = abs(n);
    printf("Valor absoluto: %d\n", n);  
    }

  return 0;
  }
