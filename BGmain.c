#include <stdio.h>
#include <stdlib.h>
#include <print Matrix.h>
#define N //��ȣ��� �����ϱ�
#define M // M�� ���� �� ���� 

int main(int argc, char *argv[]) {
	int bingo_user[N][N]; //2���� �迭
	int bingo_computer[N][N];	 
	int N=n;
	
	do
	{
		printf("�������� �� ������ �Է��ϼ��� : ");//�� ������ ������ �����Ҽ� ���� 
		scanf("%i", n);//�̸� �о�� 
	
		if(N<3)
		{
		printf("3�̻��� ���ڸ� �Է��ϼ���."); 
		}
	
	}while(N<3);//1x1,2x2 ����� ������ ����� ������ �̱� 
	
	do
	{
		printf("��� ���� �޼��ϸ� �̱��� ������ �Է��ϼ��� : "); 
		scanf("%i", m);//�̸� �о�� 
	 
		if((2N+2)<(2m+2))//�ִ� ������ �� ���� 
		{
		printf("�Ұ����� �����Դϴ�."); 
		}
	
	}while((2N+2)>(2m+2));
	
	for(int i = 0; i<N ; i++) {//���� �ݺ��ϴ� for�� 
		int i,j;
			for(int j = 0; j<N ;j++) {//���� �ݺ��ϴ� for��, �̰� ���� ������ �� for�� ���� �� �ݺ� 
				bingo_user[i][j] = int random();
			}
		}
	
	for(int i = 0; i<N ; i++) {//��ǻ�� ������ ¥��
		int i,j;
			for(int j = 0; j<N ;j++) { 
				bingo_computer[i][j] = int random();
			}
		}
		
	void printMatrix(int bingo_user[N][N]); //������ ��Ʈ���� ���, �ǽ�ch9�� ��Ʈ���� ��� �Լ� ������,���� �Լ��� �и� 
	void printMatrix(int bingo_computer[N][N]); //��ǻ���� ��Ʈ���� ��� 


	return 0;
}
