#include <stdio.h>
#include <math.h>

int
main()
  {
  float IMC, peso, alt;

  printf("Digite o peso em Kg\n");
  scanf("%f", &peso);

  printf("Digite a altura em Metros\n");
  scanf("%f", &alt);

  IMC = (peso / (pow(alt, 2)));

  if(IMC < 20)
    {
    printf("Peso ideial\n");
    }
  if((IMC >= 20) && (IMC < 25))
    {
    printf("Peso ideial\n");
    }
  if((IMC >= 25) && (IMC < 30))
    {
    printf("Peso ideial\n");
    }
  if((IMC >= 30) && (IMC < 35))
    {
    printf("Peso ideial\n");
    }
  if(IMC > 30)
    {
    printf("Peso ideial\n");
    }



  return 0;
  }