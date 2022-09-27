#include <stdio.h>

int
main()
  {
  int l, p, a;
  printf("Escreva o valor do lado do quadrado\n");
  scanf("%d", &l);
  
  p = l * 4;
  a = l * l;

  printf("Perimetro: %d\n", p);
  printf("Area: %d\n", a);

  return 0;
  }
