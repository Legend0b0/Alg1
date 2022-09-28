#include <stdio.h>

int
main()
  {
  int n;
  
  printf("Digite um numero\n");
  scanf("%d", &n);
  
  if((n % 2) == 0)
    {
    printf("Eh numero par\n");
    }
  else
    {
    printf("Eh numero impar\n");
    }

  return 0;
  }