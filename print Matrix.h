 #define N 3
 
 void printMatrix(int bingo_user[N][N]) //������ ��Ʈ���� ���, �ǽ�ch9�� ��Ʈ���� ��� �Լ� ������
	{
	int i, j;
	
	for (i=0; i<N; i++)
		{for (j=0; j<N; j++)
		{printf("%d ", bingo_user[i][j]);}
		printf("\n"); 
		}
	return;
	}
	
	void printMatrix(int bingo_computer[N][N]) //��ǻ���� ��Ʈ���� ��� 
	{
	int i, j;
	
	for (i=0; i<N; i++)
		{for (j=0; j<N; j++)
		{printf("%d ", bingo_computer[i][j]);}
		printf("\n"); 
		}
	return;
	}
