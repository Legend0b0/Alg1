#include <stdio.h>

int
main()
  {
  int n[2];

  for(int i = 0; i < 2; i++)
    {
    printf("Digite um numero\n");
    scanf("%d", &n[i]);
    }
  
  if(n[0] > n[1])
    {
    printf("%d eh maior\n", n[0]);
    }
  if(n[0] == n[1])
    {
    printf("Sao iguais\n");
    }
  if(n[0] < n[1])
    {
    printf("%d eh maior\n", n[1]); 
    }
  return 0;
  }