#include <stdio.h>

int
main()
{
int n, soma = 0;

//printf("Escreva um numero inteiro\n");
scanf("%d", &n);

for(int i = 1; i <= n; i++)
	{
	soma = soma + i;
	}

//printf("A soma eh igual a: ");
printf("%d\n", soma);

return 0;
}
