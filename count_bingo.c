int count_bingo(int *count_line, int N);
//한줄이 모두 -1이 되면 빙고>가로,세로,대각선에 -1이 N개면 line 1개  
//1.가로 빙고
//2.세로 빙고
//3.대각선 빙고 

{
	int i, j;
	int cell[12]={0};
	int line=0;
	
/*bingo칸수[12]배열을 만들고, 
0~N-1까지는 가로줄, N~2N-1까지는 세로줄, 2N,2N+1은 대각선 두 줄에 할당한다.
그리고 for문을 돌려 이 줄이 빙고 조건을 만족하면 line++*/

	for(i=0; i<N; i++)	//가 로  
	{
		for(j=0; j<N; j++)
		{
			if(bingo[i*N+j] == '-1') 
			{cell[i]++;}			
		}
	}
	
	for(i=0; i<N; i++)	//세 로  
	{
		for(j=0; j<N; j++)
		{
			if(bingo[j*N+i] == '-1') 
			{cell[i+N]++;}			
		}
	}	
	

	for(i=0; i<N; i++)	//대각선 '\' 
	{
		for(j=0; j<N; j++)
		{
			if(bingo[i*N+j] == '-1') 
			{cell[2N]++;}			
		}
	}
	
	for(i=4; i>=0; i--)	//대각선 '/' 
	{
		for(j=4; j>=0; j--)
		{
			if(bingo[i*N+j] == '-1') 
			{cell[2N+1]++;}			
		}
	}
	
	//여기까지 한 줄당 체크된 칸 수를 세었음, 이제 체크된 칸수=N칸이면 줄 1줄로 체크
	for(i=0;i<(2N+1);i++)
	{
		if(cell[i]==N)
		count_line++;
	}
	 
	return count_line;	//줄 수 반환  
}
