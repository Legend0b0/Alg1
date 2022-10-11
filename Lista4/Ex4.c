#include <stdio.h>

int
main()
{
int n, soma = 0;

//printf("Escreva um numero inteiro\n");
scanf("%d", &n);

for(int i = 0; i <= n; i++)
	{
		if(i % 2 != 0)
			{
			soma += i;
			}
	}

//printf("A soma dos numeros impares ate 'n' eh: ");
printf("%d\n", soma);

return 0;
}
