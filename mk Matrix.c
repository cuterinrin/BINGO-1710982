void mk_Matrix()
/*
1.N*N 배열만들기
2.그걸 랜덤으로 섞음
	2-1.랜덤한 칸 번호 생성
	2-2.랜덤배열칸과 거기에 배열된 숫자를 바꿈 
*/

srand(time(NULL));//랜덤숫자 
int i,j,a,b,temp;//for문에 쓰일 변수들과 칸들을 서로 바꿀 때 쓸 매개변수 선언 
int bingo[N][N];

for(int i = 0; i<N ; i++) {//열을 반복하는 for문 
	for(int j = 0; j<N ;j++) {//행을 반복하는 for문, 이게 한줄 끝나면 위 for로 다음 열 반복 
		bingo[i][j] = arr++;//1부터 차근차근 배열 
		}
	}
	



