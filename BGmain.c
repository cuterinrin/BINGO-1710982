#include <stdio.h>
#include <stdlib.h>
#include <print Matrix>
#define N //��ȣ��� �����ϱ�
#define M // M�� ���� �� ���� 

int main(int argc, char *argv[]) {
	int bingo_user[N][N]; //2���� �迭
	int bingo_computer[N][N];	 
	int N;
	
	do
	{
	printf("�������� �� ������ �Է��ϼ��� : ");//�� ������ ������ �����Ҽ� ���� 
	scanf("%i", N);//�̸� �о�� 
	
	if(N<3)
	{
	printf("3�̻��� ���ڸ� �Է��ϼ���."); 
	}
	
	}while(N<3);//1x1,2x2 ����� ������ ����� ������ �̱� 
	
	
	void printMatrix(int bingo_user[N][N]); //������ ��Ʈ���� ���, �ǽ�ch9�� ��Ʈ���� ��� �Լ� ������,���� �Լ��� �и� 
	void printMatrix(int bingo_computer[N][N]); //��ǻ���� ��Ʈ���� ��� 


	return 0;
}
