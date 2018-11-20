void mk_Matrix()
for(int i = 0; i<N ; i++) {//열을 반복하는 for문 
		int i,j;
			for(int j = 0; j<N ;j++) {//행을 반복하는 for문, 이게 한줄 끝나면 위 for로 다음 열 반복 
				bingo_user[i][j] = int random();
			}
		}
	
	for(int i = 0; i<N ; i++) {//컴퓨터 빙고판 짜기
		int i,j;
			for(int j = 0; j<N ;j++) { 
				bingo_computer[i][j] = int random();
			}
		}
