int process_bingo(int num);
/*�ʿ��� ��
1. get number���� �Է¹��� ���ڸ� -1�� �ٲٴ� ���
2. for������ �Է� ����=ĭ�� ����ִ� ���� �� -1�� �� �ٲٱ�  

*/

int i,j;

for(i=0; i<N; i++)
{
	for(j=0; j<N; j++)
	{
		if( num == bingo_user[i][j])	//�Է� ���� = ���� ����			
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


