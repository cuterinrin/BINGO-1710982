#include <stdio.h>
#include <stdlib.h>
#include <time.h>//���� �����ϱ� ���ؼ� 
#include "print Matrix.h"//��� �������  
#include "mk Matrix.h"
#include "getNme.h"
#include "getNcom.h"
#include "process_bingo.h"
#include "count_bingo.h"

#define N	5	//��ȣ��� �����ϱ�
#define M 	5	// M�� ���� �� ���� 
 
int main(int argc, char *argv[]) {
	//1.�������� 
	int bingo_user[N][N]; //2���� �迭 - �� �� 
	int bingo_computer[N][N];
	int N; //N*N�迭 
	int *input_user, *input_com; //���� ���� 
	int line_u, line_c; //���� ���� 
	int *count_line_user;
	int *count_line_com;
	
	//2.������ �����
	void mk_Matrix(bingo_user[N][N]);	
	void mk_Matrix(bingo_computer[N][N]);	

	printf("***********BINGO BINGO***********"); 
	
	//3. ���� �ݺ��� ��ü 
	do
	{
	void printMatrix(int bingo_user[N][N]); //������ ��Ʈ���� ���
	void printMatrix(int bingo_computer[N][N]); //��ǻ���� ��Ʈ���� ��� 
	int get_number_me(int input_user);//���� ������ ��ȣ �޴� �Լ� 
	int get_number_com(int input_com);//��ǻ�� ���� ��ȣ �Լ� 
	int process_bingo(int num_user, int num_com);//������ ���ڸ� -1�� ġȯ�ϴ� �Լ� 
	int count_bingo(int bingo_user, int N);//���� ���� ���� ī��Ʈ 
	int count_bingo(int bingo_computer, int N);//��ǻ�� ���� ���� ī��Ʈ 
	}
	while(count_line_user <M && count_line_com < M);
	//������ ��ǻ�� �� �� �ϳ��� ���� ���� �޼��ϸ� �������� 
	
	//4. ���� ��� 
	if(count_line_user>M)//�� ���μ� m�� ���� > �̱� 
	{printf("�¸��ϼ̽��ϴ�!");
	}
	else
	{printf("�й��ϼ̽��ϴ�.");
	}
	
	return 0;
}
