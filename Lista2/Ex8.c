#include <stdio.h>

int
main()
  {
  int n[5];
  int maior, menor;
  for(int i = 0; i < 5; i++)
    {
    printf("Digite um numero\n");
    scanf("%d", &n[i]);
    
    if(i == 0)
      {
      maior = n[i];
      menor = n[i];
      }
    if(n[i] < menor)
      {
      menor = n[i];
      }
    if(n[i] > maior)
      {
      maior = n[i];
      }
    }
    
  printf("Menor: %d\n", menor);
  printf("Maior: %d\n", maior);

  return 0;
  }