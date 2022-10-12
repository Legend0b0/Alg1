#include <stdio.h>

int
main()
{	
int x, n, exp = 1;

//printf("Digite o valor de 'x' e 'n':\n");
scanf("%d %d", &x, &n);

if(n > 0)
{
		for(int i = 1; i <= n; i++)
		{
		exp *= x;
		}

	printf("%d\n", exp);
	}

return 0;
}
