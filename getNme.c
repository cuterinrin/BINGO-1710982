int get_number_me(int *input_user)

int retry;
    
do 
{
	retry = 0;//초기화  
    printf("1에서 %i 사이의 수를 입력하시오. : ", N*N);
    scanf("%i", &input_user);
        if (num < 1 || num > N*N) 
		{// 다시 입력받아야 함  
        retry = 1;                     
        }
    }
}while (retry == 1); //retry=1이면 do 다시돌리기 
                        
printf("%i를 선택했습니다. \n", input_user);   

return ;
}


