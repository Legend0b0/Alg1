#include <stdio.h>

int
main()
  {
  int v[3];
  int cont;

  for(int i = 0; i < 3; i++)
    {
    printf("Digite um numero\n");
    scanf("%d", &v[i]);
    }
  for(int i = 0; i < 3; i++)
    {
    cont = i + 1;
    printf("O %d valor é ", cont);
    if(v[i] > 0)
      {
      printf("positivo\n");
      }
    if(v[i] == 0)
      {
      printf("igual a 0\n");
      }
    if(v[i] < 0)
      {
      printf("negativo\n");
      }
    }



  return 0;
  }