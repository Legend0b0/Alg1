#include <stdio.h>

int
main()
	{
	int n, count = 0;
	
	puts("Digite o tamanho do vetor");
	scanf("%d", &n);

	int v[n];

	puts("Preencha os 'n' espaços do vetor");
	
	for(int i = 0; i < n; i++)
		{
		scanf("%d", &v[i]);
		}	

	for(int i = 0; i < (n-count); i++)
		{
		for(int j = (i+1); j < (n-count);)
			{
			if(v[i] == v[j])
				{
				for(int k = j; k < ((n-count)-1); k++)
					{
					v[k] = v[k+1];
					}
				count++;
				}
			else
				{
				j++;
				}
			}
		}

	printf("%d\n", count);

	for(int i = 0; i < (n-count); i++)
		{
		printf("%d ", v[i]);
		}
	printf("\n");

	return 0;
	}
