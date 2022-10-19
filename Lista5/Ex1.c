#include <stdio.h>

int
main()
  {
  int n, x;
  printf("Escreva o tamanho do vetor\n");
  scanf("%d", &n);
  int v[n];
  
  printf("Preencha os valores do vetor\n");
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }

  for(int i = 0; i < n; i++)
    {
    x = 0;
    for(int j = 0; j < i; j++)
      {
      if(v[i] == v[j])
        {
        x = 1;
        break;
        }
      }
    if(x == 0)
      {
      printf("%d ", v[i]);
      }
    }

  printf("\n");

  return 0;
  }
