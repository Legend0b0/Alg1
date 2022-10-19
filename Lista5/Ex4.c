#include <stdio.h>

int
main()
  {
  int n, k, p = -1;

  printf("Digite o tamanho do vetor\n");
  scanf("%d", &n);

  printf("Digite o numero 'k' a ser buscado\n");
  scanf("%d", &k);

  int v[n];

  printf("Preencha o vetor\n");
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }

  for(int i = 0; i < n; i++)
    {
    if(v[i] == k)
      {
      p = i;
      break;
      }
    }

  printf("%d\n", p);

  return 0;
  }
