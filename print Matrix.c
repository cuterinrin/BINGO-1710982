void printMatrix(int bingo[][N]); //��Ʈ���� ���, �ǽ�ch9�� ��Ʈ���� ��� �Լ� ������
	
{
int i, j;
	
	for (i=0; i<N; i++)
		{for (j=0; j<N; j++)
		{printf("|%d|", bingo_user[i][j]);}
		printf("\n"); 
		}
return;
}
	
