#include <stdio.h>

int
main()
	{
	int n, countv1 = 0, countv2 = 0, countv3 = 0, aux;

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

	for(int i = 0; i < (n-countv1); i++)
		{
		for(int j = (i+1); j < (n-countv1);)
			{
			if(v1[i] == v1[j])
				{
				for(int k = j; k < ((n-countv1)-1); k++)
					{
					v1[k] = v1[k+1];
					}
				countv1++;
				}
			else
				{
				j++;
				}
			}
		}

	for(int i = 0; i < (n-countv2); i++)
		{
		for(int j = (i+1); j < (n-countv2);)
			{
			if(v2[i] == v2[j])
				{
				for(int k = j; k < ((n-countv2)-1); k++)
					{
					v2[k] = v2[k+1];
					}
				countv2++;
				}
			else
				{
				j++;
				}
			}
		}

	for(int i = 0; i < (n-countv1); i++)
		{
		for(int j = 0; j < (n-countv2); j++)
			{
			if(v1[i] == v2[j])
				{
				countv3++;
				}
			}
		}

	int v3[countv3];
	countv3 = 0;

	for(int i = 0; i < (n-countv1); i++)
		{
		for(int j = 0; j < (n-countv2); j++)
			{
			if(v1[i] == v2[j])
				{
				v3[countv3] = v1[i];
				countv3++;
				}	
			}
		}

	for(int i = 0; i < countv3; i++)
		{
		for(int j = 0; j < (countv3 - 1); j++)
			{
			if(v3[j] > v3[j+1])
				{
				aux = v3[j];
				v3[j] = v3[j+1];
				v3[j+1] = aux;
				}
			}
		}	

	for(int i = 0; i < countv3; i++)
		{
		printf("%d ", v3[i]);
		}
	printf("\n");

	return 0;
	}
