#include <stdio.h>

int
main()
	{
	int n, aux, count = 0;
	
//	puts("Digite o tamanho do vetor");
	scanf("%d", &n);

	int v[n];

//	puts("Preencha o vetor");

	for(int i = 0; i < n; i++)
		{
		scanf("%d", &v[i]);
		}

	for(int i = 0; i < (n-count);)
		{
		if(v[i] < 0)
			{
			for(int j = i; j < (n-1); j++)
				{
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
				}
			count++;
			}
		else
			{
			i++;
			}		
		}

	for(int i = 0; i < (n-count); i++)
		{
		printf("%d ", v[i]);
		}
	printf("\n");

	return 0;
	}
