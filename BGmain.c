#include <stdio.h>
#include <stdlib.h>
#include <time.h>//난수 생성하기 위해서 
#include "print Matrix.h"//헤더 끌어오기  
#include "mk Matrix.h"
#include "getNme.h"
#include "getNcom.h"
#include "process_bingo.h"
#include "count_bingo.h"

#define N 5	//기호상수 선언하기
#define M 5	// M은 그은 줄 갯수 
 
 
int main(int argc, char *argv[]) ;{

	//1.변수선언 
	int bingo_user[N][N]; //2차원 배열 - 유 저 
	int bingo_computer[N][N];
	int N; //N*N배열 
	int *input_user, *input_com; //선택 숫자 
	int line_u, line_c; //빙고 라인 
	int *count_line_user;
	int *count_line_com;
	int tryy=0;//시도횟수 
	
	//2.빙고판 만들기
	void mk_Matrix(bingo_user[N][N]);	
	void mk_Matrix(bingo_computer[N][N]);	

	printf("***********BINGO BINGO***********"); 
	
	//3. 빙고 반복할 본체 
	do
	{
	void printMatrix(bingo_user[N][N]); //유저의 매트릭스 출력
	void printMatrix(bingo_computer[N][N]); //컴퓨터의 매트릭스 출력 
	void get_number_me(input_user);//내가 선택할 번호 받는 함수 
	int get_number_com(input_com);//컴퓨터 선택 번호 함수 
	int process_bingo(num_user, num_com);//선택한 숫자를 -1로 치환하는 함수 
	int count_bingo(bingo_user, N);//나의 빙고 라인 카운트 
	int count_bingo(bingo_computer, N);//컴퓨터 빙고 라인 카운트 
	tryy++//실행횟수  
	}
	while(count_line_user <M && count_line_com < M);
	//유저나 컴퓨터 둘 중 하나가 빙고 라인 달성하면 빠져나옴 
	
	//4. 승패 출력 
	if(count_line_user>M)//내 라인수 m개 넘음 > 이김 
	{printf("%i 번째 턴에 승리하셨습니다! ", tryy);
	}
	else
	{printf("패배하셨습니다. 횟수는 %i번 입니다.", tryy);
	}
	
	return 0;
}
