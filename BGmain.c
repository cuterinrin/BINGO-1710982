#include <stdio.h>
#include <stdlib.h>
#include <time.h>//���� �����ϱ� ���ؼ� 
#include "print Matrix.h"//��� �������  
#include "mk Matrix.h"
#include "getNme.h"
#include "getNcom.h"
#include "process_bingo.h"
#include "count_bingo.h"

#define N 		//��ȣ��� �����ϱ�
#define M 	5	// M�� ���� �� ���� 
 
int main(int argc, char *argv[]) {
	//1.�������� 
	int bingo_user[N][N]; //2���� �迭
	int bingo_computer[N][N];	 
	int N;
	
	
	
	
	//2.������ �����, ��� 
	void mk_Matrix;
		
	
	//3. ���� ��ü 
	do
	{
	void printMatrix(int bingo_user[N][N]); //������ ��Ʈ���� ���, �ǽ�ch9�� ��Ʈ���� ��� �Լ� ������,���� �Լ��� �и� 
	void printMatrix(int bingo_computer[N][N]); //��ǻ���� ��Ʈ���� ��� 
	void get_number_me;
	void get_number_com;
	int process_bingo;
	int count_bingo(int *bingo_user, int N);
	int count_bingo(int *bingo_computer, int N);

	}while( count_bingo(int *bingo_user, int N) <M || count_bingo(int *bingo_computer, int N) < M);
	
	//4. ���� ��� 
	if()
	{printf("�¸��ϼ̽��ϴ�!");
	}
	else
	{printf("�й��ϼ̽��ϴ�.");
	}
	
	return 0;
}
