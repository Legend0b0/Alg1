#include <stdio.h>

int
main()
	{
	int m, n;

	puts("Digite o tamanho da matriz");
	scanf("%d %d", &m, &n);

	int mtz[m][n];

	for(int i = 0; i < m; i++)
		{
		for(int j = 0; j < n; j++)
			{
			if(i == j)
				{
				mtz[i][j] = 0;
				}
			if(i > j)
				{
				mtz[i][j] = -1;
				}
			if(i < j)
				{
				mtz[i][j] = 1;
				}
			}
		}

	for(int i = 0; i < m; i++)
		{
		for(int j = 0; j < n; j++)
			{
			printf("%d\t", mtz[i][j]);
			}
		printf("\n");
		}

	return 0;
	}
