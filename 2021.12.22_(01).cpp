// ����_���Ʈ����_15650��_�ǹ�3_N�� M(2) ����
// ������ ��� ���� �����ϴ� ��츦 ����ϴ°� �ٽ��� ��������.
// Ǯ�̹�	:	1. �� �� �������� �� �� �ֵ��� �Լ��� ����
//				2. N�� ������ M���� ������ ����� ��츸 ���

#include<iostream>

using namespace std;

int N, M;
int sol[8];

void sequence(int count, int idx, int num) {

	// M���� ���� ����� ���� ���
	if (count == M) {
		for (int i = 0; i < M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	// ��Ʈ��ŷ�� ��������� ǥ���ߴ�.
	else {
		for (int j = num + 1; j <= N; j++) {
			sol[idx] = j;
			sequence(count + 1, idx + 1, j);
		}
	}
}

int main(){

	cin >> N >> M;


	for (int i = 1; i <= N - M+1; i++) {
		sol[0] = i;
		sequence(1, 1, i);	// ���� ������ ���� ��, ������ ������ index, ���������� ������ ���� 
	}


	return 0;
}