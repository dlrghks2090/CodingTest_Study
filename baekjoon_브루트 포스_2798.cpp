// ���� �η�Ʈ ����_2798��
// ���� ����
// ���ڰ� �����ִ� N���� ī�尡 �־��� ��, 3���� �̾� M�� �ִ��� ����� ī���� 3���� ���� ����϶�.
// N�� M, N���� ����ī�尡 �Է����� �־�����.

#include <iostream>

using namespace std;

int main() {

	int N, M;
	int* arr;
	int max = 0;


	cin >> N >> M;

	arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {

				if (arr[i] + arr[j] + arr[k] > M)
					continue;
				if (arr[i] + arr[j] + arr[k] > max) {
					max = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}
	
	cout << max;

	delete[] arr;
	return 0;
}