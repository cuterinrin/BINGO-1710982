void mk_Matrix()
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
