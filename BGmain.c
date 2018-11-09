#include <stdio.h>
#include <stdlib.h>
#include <print Matrix>
#define N //기호상수 선언하기
#define M // M은 그은 줄 갯수 

int main(int argc, char *argv[]) {
	int bingo_user[N][N]; //2차원 배열
	int bingo_computer[N][N];	 
	int N;
	
	do
	{
	printf("빙고판의 줄 갯수를 입력하세요 : ");//줄 갯수는 유저가 지정할수 있음 
	scanf("%i", N);//이를 읽어옴 
	
	if(N<3)
	{
	printf("3이상의 숫자를 입력하세요."); 
	}
	
	}while(N<3);//1x1,2x2 빙고는 시작한 사람이 무조건 이김 
	
	
	void printMatrix(int bingo_user[N][N]); //유저의 매트릭스 출력, 실습ch9의 매트리스 출력 함수 가져옴,별도 함수로 분리 
	void printMatrix(int bingo_computer[N][N]); //컴퓨터의 매트릭스 출력 


	return 0;
}
