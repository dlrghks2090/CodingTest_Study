// ����_���Ʈ����_15649��_�ǹ�3_N�� M(1) ����
// �ߺ����� ��Ʈ��ŷ ������� Ǯ��´�.

#include<iostream>
#include<vector>

using namespace std;

int arr[9];
int N, M;
int sol[9];
int count = 0;


// ��Ʈ��ŷ���� ������ ����� �Լ�
void sequence(int c) {

	// M���� ������ ����� ���
	if (c == M) {
		for (int i = 1; i <= M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	
	// ������ ���� 1~N ���� ����
	for (int j = 1; j <= N; j++) {
		int ox = 0;	
		
		// j�� sol�� ����� ���ڵ��� �ϳ����� �Ǻ�
		for (int jj = 1; jj <= c; jj++) {
			if (sol[jj] == j) {
				++ox;
			}
		}
		// �������� ���� �����̸� ���� �� ���� ���� ã�� sequence ����
		if (ox == 0) {
			sol[c + 1] = j;
			sequence(c + 1);
		}
		
	}


}

int main() {

	cin >> N >> M;


	sequence(0);



	return 0;
}