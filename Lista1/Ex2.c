#include <stdio.h>

int
main()
  {
  float m, k;
  
  printf("Digite a distancia em milhas\n");
  scanf("%f", &m);

  k = m * 1.61;

  printf("Distancia: %0.3f km\n", k);

  return 0;
  }
