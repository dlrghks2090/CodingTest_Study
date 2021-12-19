// ����_���Ʈ����_9663��_���5_N-Queen ����
// ��͸� Ȱ���� ��Ʈ��ŷ���� Ǯ��´�.

#include<iostream>

using namespace std;

int col[15];	// ���� ��Ÿ�� �迭, �� ���ҿ��� ���� �ִ� ���� ��ġ�� ����ȴ�.
int sol = 0;	// ���� ���� �� ����� ���� ����
int N;			// ü������ ũ��


// ���� ���� �� �ִ� �ڸ������� üũ���ִ� �Լ�
bool check(int idx) {

	for (int i = 0; i < idx; i++) {
		// ���� �࿡ �ְų� �밢�� ��ġ�� ������ Ż��
		if (col[i] == col[idx] || abs(col[idx] - col[i]) == idx - i) {
			return false;
		}
	}
	return true;

}


void nqueen(int n) {
	 
	// N������ ���� �������� ����� �� 1 ����
	if (n == N) {
		++sol;
	}
	else {
		// ��͸� ���� ���� ���� ��Ʈ��ŷ�� �����Ͽ���.
		for (int i = 0; i < N; i++) {
			col[n] = i;

			// �̺κ��� ��Ʈ��ŷ�� �ٽ�
			if (check(n)) {
				nqueen(n + 1);
			}

		}
	}
}

int main() {

	cin >> N;

	// 0��° ������ �����Ѵ�.
	nqueen(0);
	cout << sol;

	return 0;
}