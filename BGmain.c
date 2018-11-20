#include <stdio.h>
#include <stdlib.h>
#include <time.h>//난수 생성하기 위해서 
#include "print Matrix.h"//헤더 끌어오기  
#include "mk Matrix.h"
#include "getNme.h"
#include "getNcom.h"
#include "process_bingo.h"
#include "count_bingo.h"

#define N 		//기호상수 선언하기
#define M 	5	// M은 그은 줄 갯수 
 
int main(int argc, char *argv[]) {
	//1.변수선언 
	int bingo_user[N][N]; //2차원 배열
	int bingo_computer[N][N];	 
	int N;
	
	
	
	
	//2.빙고판 만들기, 출력 
	void mk_Matrix;
		
	
	//3. 빙고 본체 
	do
	{
	void printMatrix(int bingo_user[N][N]); //유저의 매트릭스 출력, 실습ch9의 매트리스 출력 함수 가져옴,별도 함수로 분리 
	void printMatrix(int bingo_computer[N][N]); //컴퓨터의 매트릭스 출력 
	void get_number_me;
	void get_number_com;
	int process_bingo;
	int count_bingo(int *bingo_user, int N);
	int count_bingo(int *bingo_computer, int N);

	}while( count_bingo(int *bingo_user, int N) <M || count_bingo(int *bingo_computer, int N) < M);
	
	//4. 승패 출력 
	if()
	{printf("승리하셨습니다!");
	}
	else
	{printf("패배하셨습니다.");
	}
	
	return 0;
}
