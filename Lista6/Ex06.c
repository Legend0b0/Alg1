#include <stdio.h>

int
main()
	{
	int n, aux, count = 0;

//	puts("Digite o tamanho dos vetores");
	scanf("%d", &n);
	
	int v1[n], v2[n];

//	puts("Preencha o vetor 1");
	for(int i = 0; i < n; i++)
		{
		scanf("%d", &v1[i]);
		}

//	puts("Preencha o vetor 2");
	for(int i = 0; i < n; i++)
		{
		scanf("%d", &v2[i]);
		}
		
	int size = ((2*n));
	int v3[size];

	for(int i = 0; i < n; i++)
		{
			v3[i] = v1[i];
		}

	for(int i = 0; i < n; i++)
		{
			v3[n+i] = v2[i];
		}

	for(int i = 0; i < size; i++)
		{
		for(int j = 0; j < (size-1); j++)
			{
			if(v3[j] > v3[j+1])
				{
				aux = v3[j];
				v3[j] = v3[j+1];
				v3[j+1] = aux;
				}
			}
		}	

	for(int i = 0; i < size; i++)
		{
		for(int j = (i+1); j < (size-count);)
			{
			if(v3[i] == v3[j])
				{
				for(int k = j; k < ((size-count)-1); k++)
					{
					v3[k] = v3[k+1];
					}
				count++;
				}
			else
				{
				j++;
				}
			}
		}

	for(int i = 0; i < (size-count); i++)
		{
		printf("%d ", v3[i]);
		}
	printf("\n");

	return 0;
	}
