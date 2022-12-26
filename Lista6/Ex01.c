#include <stdio.h>

int
main()
	{
	int n, aux;
	
//	puts("Digite um numero");
	scanf("%d", &n);
	
	int v[n];

//	puts("Preencha os 'n' espaços do vetor");
	for(int i = 0; i < n; i++)
		{
		scanf("%d", &v[i]);
		}

	for(int i = 0; i < n; i++)
		{
		for(int j = 0; j < (n - 1); j++)
			{
			if(v[j] > v[j+1])
				{
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
				}
			}
		}

	for(int i = 0; i < n; i++)
		{
		printf("%d ", v[i]);
		}
	printf("\n");

	return 0;
	}
