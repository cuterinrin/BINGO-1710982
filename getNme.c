int get_number_me(int *input_user)

int retry;
    
do 
{
	retry = 0;//�ʱ�ȭ  
    printf("1���� %i ������ ���� �Է��Ͻÿ�. : ", N*N);
    scanf("%i", &input_user);
        if (num < 1 || num > N*N) 
		{// �ٽ� �Է¹޾ƾ� ��  
        retry = 1;                     
        }
    }
}while (retry == 1); //retry=1�̸� do �ٽõ����� 
                        
printf("%i�� �����߽��ϴ�. \n", input_user);   

return ;
}


