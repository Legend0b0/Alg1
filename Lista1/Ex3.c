#include <stdio.h>

int
main()
  {
  float km, l, kml;
  
  printf("Digite a distancia em km\n");
  scanf("%f", &km);

  printf("Digite a quantidade de litros de combustivel gasto\n");
  scanf("%f", &l);

  kml = km / l;

  printf("Consumo medio gasto: %0.2f km/l\n", kml);

  return 0;
  }
