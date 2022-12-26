#include <stdio.h>

int
main()
  {
  int n;
  float mlr, media = 0;

//  printf("Digite a quantidade de voltas\n");
  scanf("%d", &n);

  float v[n];
  
//  printf("Digite o tempo de cada volta em minutos\n");
  for(int i = 0; i < n; i++)
    {
    scanf("%f", &v[i]);
    if(i == 0)
      {
      mlr = v[i];
      }
    if(mlr > v[i])
      {
      mlr = v[i];
      }
    media += v[i];
    }

  media /= n;

//  printf("Melhor tempo:");
	printf("%0.2f\n", mlr);

//  printf("Tempo medio das voltas");
	printf("%0.2f\n", media); 

  return 0;
  }
