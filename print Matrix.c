void printMatrix(int bingo_user[N][N]) //유저의 매트릭스 출력, 실습ch9의 매트리스 출력 함수 가져옴
	{
	int i, j;
	
	for (i=0; i<N; i++)
		{for (j=0; j<N; j++)
		{printf("%d ", bingo_user[i][j]);}
		printf("\n"); 
		}
	return;
	}
	
	void printMatrix(int bingo_computer[N][N]) //컴퓨터의 매트릭스 출력 
	{
	int i, j;
	
	for (i=0; i<N; i++)
		{for (j=0; j<N; j++)
		{printf("%d ", bingo_computer[i][j]);}
		printf("\n"); 
		}
	return;
	}
