#include <stdio.h>
#define Atemp 25.0
int
main()
  {
  float temp;
  
  printf("Digite a temperatura:\n");
  scanf("%f", &temp);

  if(temp < Atemp)
    {
    printf("A temperatura esta agradavel\n");
    }
  else
    {
    printf("Esta muito quente\n");
    }

  return 0;
  }