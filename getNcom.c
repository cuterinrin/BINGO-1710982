int get_number_com(int *input_com);
 
/*
뽑은 난수가 표에 있는 수>RETURN 
*/
int num_com = rand()%(N*N)+1;//1~N^2사이 숫자 난수 생성 
	
		if(input_com>0 && input_com<(N*N)+1)	
		{
			for(i=0; i<(N*N); i++)
			{
				for(i=0; i<(N*N); i++)
				{
					if(bingo_com[i][j]==input_com)		//표에 있는 수(나오지 않은 수)=뽑은 수 > 나감> 숫자 내보냄	
						break;
				}
			}
		
printf("컴퓨터는 %i를 선택했습니다. \n", input_com);

return input_com;
}
