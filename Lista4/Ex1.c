#include <stdio.h>

int
main()
{
int inicio, fim, soma = 0;

//printf("Escreva 2 numeros inteiros, inicio e fim\n");
scanf("%d %d", &inicio, &fim);

for(int i = inicio; i <= fim; i++)
	{
	soma = soma + i;
	}

//printf("A soma de inicio a fim eh");
printf("%d\n", soma);
	
return 0;
}
