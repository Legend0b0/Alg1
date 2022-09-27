#include <stdio.h>

int
main()
  {
  float d, r, c;

  printf("Digite a o valor em dolares\n");
  scanf("%f", &d);

  printf("Digite a cotacao do dolar\n");
  scanf("%f", &c);

  r = d * c;

  printf("Valor: %0.2f reais\n", r);

  return 0;
  }
