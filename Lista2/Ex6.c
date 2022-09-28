#include <stdio.h>

int
main()
  {
  float nota;
  float media = 0.0;
  
  for(int i = 1; i <= 2; i++)
    {
      printf("Digite a nota da %d prova\n", i);
      scanf("%f", &nota);
      media += nota;
    }
  media /= 2.0;

  if(media >= 7.0)
    {
    printf("Aprovado\n");
    }
  else
    {
    printf("Reprovado\n");
    }

  return 0;
  }
