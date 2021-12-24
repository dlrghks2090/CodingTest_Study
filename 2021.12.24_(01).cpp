// ����_���Ʈ����_15657��_�ǹ�3_N�� M(8) ����

#include<iostream>
#include<algorithm>

using namespace std;

int N, M;
int arr[8];
int sol[8];

void sequence(int count, int idx) {

	// count == M �̸� ���
	if (count == M) {
		for (int i = 0; i < M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	// �ߺ�����ϸ鼭 ���������� ������ �̵��� ��Ʈ��ŷ�� �������.
	else {
		for (int i = idx; i < N; i++) {
			sol[count] = arr[i];
			sequence(count + 1, i);
		}
	}
}

int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	sequence(0, 0);



	return 0;
}