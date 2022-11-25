#include <stdio.h>

int
main()
  {
  int m;


  printf("Digite quantas sequencias quer\n");
  scanf("%d", &m);

  int tamanho;
  int menor[m];
  int maior[m];
  int pmenor[m];
  int pmaior[m];

  printf("Digite o tamanho para os vetores\n");

  scanf("%d", &tamanho);

  for(int i = 0; i < m; i++)
    {
    int v[tamanho];
    printf("Digite %d valores\n", tamanho);
    for(int j = 0; j < tamanho; j++)
      {
      scanf("%d", &v[j]);
      if((j == 0) || (maior[i] < v[j]))
        {
        maior[i] = v[j];
        pmaior[i] = j;
        }
      if((j == 0) || (menor[i] > v[j]))
        {
        menor[i] = v[j];
        pmenor[i] = j;
        }
      }
    }
  
  for(int i = 0; i < m; i++)
    {
    printf("%d (%d)\t%d (%d)\n", menor[i], pmenor[i], maior[i], pmaior[i]);
    }

  return 0;
  }
