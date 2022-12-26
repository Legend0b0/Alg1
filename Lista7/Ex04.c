#include <stdio.h>

int
main()
	{
	int m, n;
	int somaM = 0, somaN = 0, somaAux = 0;

	puts("Digite as dimecoes da matriz");
	scanf("%d %d", &m, &n);
	
	int mtz[m][n];

	for(int i = 0; i < m; i++)
		{
		for(int j = 0; j < n; j++)
			{
			scanf("%d", &mtz[i][j]);
			}
		}

	for(int i = 0; i < m; i++)
		{
		for(int j = 0; j < n; j++)
			{
			if(mtz[i][j] == 0)
				{
				somaAux++;
				}
			}
		if(somaAux == n)
			{
			somaN++;
			}
		somaAux = 0;
		}

	for(int j = 0; j < n; j++)
		{
		for(int i = 0; i < m; i++)
			{
			if(mtz[i][j] == 0)
				{
				somaAux++;
				}
			}
		if(somaAux == m)
			{
			somaM++;
			}
		somaAux = 0;
		}

	printf("%d \n%d \n", somaN, somaM);

	return 0;
	}
