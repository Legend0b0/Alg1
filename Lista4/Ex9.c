#include <stdio.h>

int
main()
{
int n, x = 0, aux = 0, b = 1;
scanf("%d", &n);
 
for(int i = 0; i < n; i++)
	{
	aux = x;
	scanf("%d", &x);
	if(i != 0)
		{
		if(aux > x)
			{
			b = 0;
			}
		}
	}

printf("%d\n", b);

return 0;
}
