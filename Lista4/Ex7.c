#include <stdio.h>

int
main()
{
int n, f = 1;

//printf("Digite um numero\n");
scanf("%d", &n);

for(int i = n; i >= 1; i--)
	{
	f *= i;
	}

//printf("O fatorial de 'n' eh: ");
printf("%d\n", f);

return 0;
}
