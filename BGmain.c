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
	int bingo_user[N][N]; //2���� �迭
	int bingo_computer[N][N];	 
	int N;
	
	
	//2.������ �����
	void mk_Matrix(bingo_user[N][N]);	
	void mk_Matrix(bingo_computer[N][N]);	

	
	//3. ���� �ݺ��� ��ü 
	do
	{
	void printMatrix(int bingo_user[N][N]); //������ ��Ʈ���� ���
	void printMatrix(int bingo_computer[N][N]); //��ǻ���� ��Ʈ���� ��� 
	int get_number_me();//���� ������ ��ȣ �޴� �Լ� 
	int get_number_com();//��ǻ�� ���� ��ȣ �Լ� 
	int process_bingo();//������ ���ڸ� -1�� ġȯ�ϴ� �Լ� 
	int count_bingo(int *bingo_user, int N);//���� ���� ���� ī��Ʈ 
	int count_bingo(int *bingo_computer, int N);//��ǻ�� ���� ���� ī��Ʈ 

	}while( count_bingo(int *bingo_user, int N) <M || count_bingo(int *bingo_computer, int N) < M);
	//������ ��ǻ�� �� �� �ϳ��� ���� ���� �޼��ϸ� �������� 
	
	//4. ���� ��� 
	if(count_bingo(int *bingo_user, int N)>M)
	{printf("�¸��ϼ̽��ϴ�!");
	}
	else
	{printf("�й��ϼ̽��ϴ�.");
	}
	
	return 0;
}
