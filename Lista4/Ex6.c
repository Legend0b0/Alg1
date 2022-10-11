#include <stdio.h>

int
main()
{
int n, soma = 0;

printf("Escreva um numero inteiro\n");
scanf("%d", &n);

for(int i = 1; i <= n; i++)
	{
	if(i % 3 == 0)
		{
		soma += i;
		}
	}

printf("A soma dos numeros diviziveis por 3 ate 'n' eh: %d\n", soma);

return 0;
}
