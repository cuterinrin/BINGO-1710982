int count_bingo(int *count_line, int N);
//������ ��� -1�� �Ǹ� ����>����,����,�밢���� -1�� N���� line 1��  
//1.���� ����
//2.���� ����
//3.�밢�� ���� 

{
	int i, j;
	int cell[12]={0};
	int line=0;
	
/*bingoĭ��[12]�迭�� �����, 
0~N-1������ ������, N~2N-1������ ������, 2N,2N+1�� �밢�� �� �ٿ� �Ҵ��Ѵ�.
�׸��� for���� ���� �� ���� ���� ������ �����ϸ� line++*/

	for(i=0; i<N; i++)	//�� ��  
	{
		for(j=0; j<N; j++)
		{
			if(bingo[i*N+j] == '-1') 
			{cell[i]++;}			
		}
	}
	
	for(i=0; i<N; i++)	//�� ��  
	{
		for(j=0; j<N; j++)
		{
			if(bingo[j*N+i] == '-1') 
			{cell[i+N]++;}			
		}
	}	
	

	for(i=0; i<N; i++)	//�밢�� '\' 
	{
		for(j=0; j<N; j++)
		{
			if(bingo[i*N+j] == '-1') 
			{cell[2N]++;}			
		}
	}
	
	for(i=4; i>=0; i--)	//�밢�� '/' 
	{
		for(j=4; j>=0; j--)
		{
			if(bingo[i*N+j] == '-1') 
			{cell[2N+1]++;}			
		}
	}
	
	//������� �� �ٴ� üũ�� ĭ ���� ������, ���� üũ�� ĭ��=Nĭ�̸� �� 1�ٷ� üũ
	for(i=0;i<(2N+1);i++)
	{
		if(cell[i]==N)
		count_line++;
	}
	 
	return count_line;	//�� �� ��ȯ  
}
