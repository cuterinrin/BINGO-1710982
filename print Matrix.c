void printMatrix(int bingo[][N]); //매트릭스 출력, 실습ch9의 매트리스 출력 함수 가져옴
	
{
int i, j;
	
	for (i=0; i<N; i++)
		{for (j=0; j<N; j++)
		{printf("|%d|", bingo_user[i][j]);}
		printf("\n"); 
		}
return;
}
	
