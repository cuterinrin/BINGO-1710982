int get_number_com(int *input_com);
 
/*
���� ������ ǥ�� �ִ� ��>RETURN 
*/
int num_com = rand()%(N*N)+1;//1~N^2���� ���� ���� ���� 
	
		if(input_com>0 && input_com<(N*N)+1)	
		{
			for(i=0; i<(N*N); i++)
			{
				for(i=0; i<(N*N); i++)
				{
					if(bingo_com[i][j]==input_com)		//ǥ�� �ִ� ��(������ ���� ��)=���� �� > ����> ���� ������	
						break;
				}
			}
		
printf("��ǻ�ʹ� %i�� �����߽��ϴ�. \n", input_com);

return input_com;
}
