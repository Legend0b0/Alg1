#include <stdio.h>
#include <stdlib.h>

int
main()
  {
  int l1, l2, l3;

  printf("Digite os valores para os 3 lados\n");
  scanf("%d %d %d", &l1, &l2, &l3);

  if((((l1 + l2 > l3) && (abs(l1 - l2) < l3)) && ((l2 + l3 > l1) && (abs(l2 - l3) < l1))) && (((l3 + l1 > l2) && (abs(l3 - l1) < l2))))
    {
    printf("Eh um triangulo\n");
    }
  else
    {
    printf("Nao eh um triangulo\n");
    }


  return 0;
  }