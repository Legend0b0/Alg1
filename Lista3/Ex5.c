#include <stdio.h>

int
main()
  {
  float valor, pc, av;
  
  printf("Digite o valor\n");
  scanf("%f", &valor);

  pc = valor / 5.0;
  av = ((valor / 10.0) * 9);

  printf("A vista: %0.2f reais\n", av);
  printf("Prazo: 5x %0.2f reais\n", pc);

  return 0;
  }