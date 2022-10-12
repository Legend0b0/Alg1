#include <stdio.h>

int
main()
{
int n;
scanf("%d", &n);

int v[n];

for(int i = 0; i < n; i++)
	{
	scanf("%d", &v[i]);
	}
int menor = v[0], maior = v[0];

for(int i = 0; i < n; i++)
	{
	if(v[i] < menor)
		{
		menor = v[i];
		}
	if(v[i] > maior)
		{
		maior = v[i];
		} 
	}

printf("%d %d\n", menor, maior);

return 0;
}
