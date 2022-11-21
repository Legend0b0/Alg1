#include <stdio.h>

int
main()
	{
	int n, k;

	puts("Digite o tamanho do vetor");
	scanf("%d", &n);

	puts("Digite o indice 'k'");
	scanf("%d", &k);

	int v[n];

	puts("Preencha os 'n' espaços do vetor");
	
	for(int i = 0; i < n; i++)
		{
		scanf("%d", &v[i]);
		}
	
	for(int i = 0; i < n; i++)
		{
		if(v[i] == k)
			{
			for(int j = i; j < (n-1); j++)
				{
				v[j] = v[j+1];
				}
			break;
			}
		}	

	for(int i = 0; i < (n-1); i++)
		{
		printf("%d ", v[i]);
		}
	printf("\n");

	return 0;
	}
