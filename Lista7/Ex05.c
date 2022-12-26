#include <stdio.h>

int
main()
	{
	int m, n;
	int bol = 1;

	puts("Digite as dimencoes da matriz");
	scanf("%d %d", &m, &n);

	char mtz[m][n];

	puts("Preencha a matriz de caracteres");
	for(int i = 0; i < m; i++)
		{
		for(int j = 0; j < n; j++)
			{
			scanf(" %c", &mtz[i][j]);
			}
		}

	for(int i = 0; i < m; i++)
		{
		for(int j = 0; j < (n-1); j++)
			{
			if(mtz[i][j] >= mtz[i][j+1])
				{
				bol = 0;
				}
			}
		}	

	printf("%d\n", bol);
	
	return 0;
	}
