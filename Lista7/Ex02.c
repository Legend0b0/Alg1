#include <stdio.h>

int
main()
	{
	int m;
	int somaA = 0, somaB = 0, somaD = 0;
	
	puts("Digite o tamanho da matriz");
	scanf("%d", &m);

	int mtz[m][m];	

	puts("Preencha a matriz");
	for(int i = 0; i < m; i++)
		{
		for(int j = 0; j < m; j++)
			{
			scanf("%d", &mtz[i][j]);
			}
		}
	
	for(int i = 0; i < m; i++)
		{
		for(int j = 0; j < m; j++)
			{
			if(i < j)
				{
				somaA += mtz[i][j];
				}
			if(i > j)
				{
				somaB += mtz[i][j];
				}
			if(i == j)
				{
				somaD += mtz[i][j];
				}
			}
		}

	printf("%d \n%d \n%d \n", somaA, somaB, somaD);

	return 0;
	}
