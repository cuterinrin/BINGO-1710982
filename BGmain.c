#include <stdio.h>
#include <stdlib.h>
#include <time.h>//난수 생성하기 위해서 
#include "print Matrix.h"//헤더 끌어오기  
#include "mk Matrix.h"
#include "getNme.h"
#include "getNcom.h"
#include "process_bingo.h"
#include "count_bingo.h"

#define N	5	//기호상수 선언하기
#define M 	5	// M은 그은 줄 갯수 
 
int main(int argc, char *argv[]) {
	//1.변수선언 
	int bingo_user[N][N]; //2차원 배열
	int bingo_computer[N][N];	 
	int N;
	
	
	//2.빙고판 만들기
	void mk_Matrix(bingo_user[N][N]);	
	void mk_Matrix(bingo_computer[N][N]);	

	
	//3. 빙고 반복할 본체 
	do
	{
	void printMatrix(int bingo_user[N][N]); //유저의 매트릭스 출력
	void printMatrix(int bingo_computer[N][N]); //컴퓨터의 매트릭스 출력 
	int get_number_me();//내가 선택할 번호 받는 함수 
	int get_number_com();//컴퓨터 선택 번호 함수 
	int process_bingo();//선택한 숫자를 -1로 치환하는 함수 
	int count_bingo(int *bingo_user, int N);//나의 빙고 라인 카운트 
	int count_bingo(int *bingo_computer, int N);//컴퓨터 빙고 라인 카운트 

	}while( count_bingo(int *bingo_user, int N) <M || count_bingo(int *bingo_computer, int N) < M);
	//유저나 컴퓨터 둘 중 하나가 빙고 라인 달성하면 빠져나옴 
	
	//4. 승패 출력 
	if(count_bingo(int *bingo_user, int N)>M)
	{printf("승리하셨습니다!");
	}
	else
	{printf("패배하셨습니다.");
	}
	
	return 0;
}
