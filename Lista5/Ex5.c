#include<stdio.h>
#define Size 6

int
main()
  {
  int resultado[Size];
  int aposta[Size];
  int cont = 0;

  printf("Digite os resultados do sorteio\n");
  for(int i = 0; i < Size; i++)
    {
    scanf("%d", &resultado[i]);
    }

  printf("Digite os numeros da aposta\n");
  for(int i = 0; i < Size; i++)
    {
    scanf("%d", &aposta[i]);
    for(int j = 0; j < Size; j++)
      {
      if(aposta[i] == resultado[j])
        {
        cont++;
        break;
        }
      }
    }

  printf("\n");

  for(int i = 0; i < Size; i++)
    {
    printf("%d ", aposta[i]);
    }
  printf("\n");
  for(int i = 0; i < Size; i++)
    {
    printf("%d ", resultado[i]);
    }
  
  printf("\n%d\n", cont);

  return 0;
  }
