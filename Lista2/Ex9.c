#include <stdio.h>

int
main()
  {
  float N1 = 12.0;
  float N2 = 17.0;
  float N3 = 25.0;
  int n;
  float nv, horas, valor;
  printf("Digite o nivel esquivalente:\n");
  printf("1) Nivel 1\n2) Nivel 2\n3) Nivel 3\n");
  scanf("%d", &n);

  if(n == 1)
    {
    nv = N1;
    }
  if(n == 2)
    {
    nv = N2;
    }
  if(n == 3)
    {
    nv = N3;
    }

  printf("Digite a quantidade de horas/aula\n");
  scanf("%f", &horas);

  valor = horas * nv;

  printf("Salario: %0.2f reais\n", valor);

  return 0;
  }