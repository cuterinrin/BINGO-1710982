int process_bingo(int num);
/*필요한 것
1. get number에서 입력받은 숫자를 -1로 바꾸는 기능
2. for문에서 입력 숫자=칸에 들어있는 숫자 면 -1로 값 바꾸기  

*/

int i,j;

for(i=0; i<N; i++)
{
	for(j=0; j<N; j++)
	{
		if( num == bingo_user[i][j])	//입력 숫자 = 빙고 숫자			
		{
			bingo_user[i][j] = '-1';	
		}
	}
}

for(i=0; i<N; i++)
{
	for(j=0; j<N; j++)
	{
		if( num_com == bingo_computer[i][j])				
		{
			bingo_computer[i][j] = '-1';				
		}
	}
}

return 0;
}


