#define N 5
void mk_Matrix(int bingo[][N]);
/*
1.N*N �迭�����
2.�װ� �������� ����
	2-1.������ ĭ ��ȣ ����
	2-2.�����迭ĭ�� �ű⿡ �迭�� ���ڸ� �ٲ� 
*/
{
srand(time(NULL));//�������� 
int i,j,a,b,temp;//for���� ���� ������� ĭ���� ���� �ٲ� �� �� �Ű����� ���� 
int bingo[][N];
int rand_i = rand() % N;
int rand_j = rand() % N;


for(i = 0; i<N ; i++) {//���� �ݺ��ϴ� for�� 
	for(int j = 0; j<N ;j++) {//���� �ݺ��ϴ� for��, �̰� ���� ������ �� for�� ���� �� �ݺ� 
		bingo[i][j] = arr++;//1���� �������� �迭 
		}
	}
	

for(a=0; a<N; a++)	//swap�̿� ���� �ڸ��迭 
{
	for(b=0; b<N; b++)
		temp=bingo[i][j];
		bingo[i][j]= bingo[rand_i][rand_j];
		bingo[rand_i][rand_j]=temp
}

return;
}

