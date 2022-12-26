#include <stdio.h>

int
main()
	{
	int m, n, bol = 0;

	puts("Digite as dimencoes da matriz");
	scanf("%d %d", &m, &n);

	int mtz[m][n];

	puts("Preencha a matriz");
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
			for(int k = i+1; k < m; k++)
				{
				for(int l = j; l < n; l++)
					{
					if(mtz[i][j] == mtz[k][l])
						{
						bol = 1;
						}
					}
				}
			}
		}	

	printf("%d\n", bol);

	return 0;
	}
