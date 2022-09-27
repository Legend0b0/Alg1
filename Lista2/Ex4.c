#include <stdio.h>

int
main()
  {
  int n, vel;

  printf("Digite quantos carros ira analizar\n");
  scanf("%d", &n);

  for(int i = 0; i < n; i++)
    {
    printf("Escreva a velocidade do carro\n");
    scanf("%d", &vel);

    if(vel > 110)
      {
      printf("Multado\n");
      }
    else
      {
      printf("Nao multado\n");
      }
    }

  return 0;
  }
