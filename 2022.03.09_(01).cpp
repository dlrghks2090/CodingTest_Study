// 2022.03.09_(01)
// ����_DP_�ǹ�3_9461��_�ĵ��� ���� ����

// i > 3 �϶�, arr[i] = arr[i-2] + arr[i-3] �� ��ȭ���� ����ؼ� Ǯ��´�.
// bottom - top ������� Ǯ��´�.

#include<iostream>

using namespace std;

int main() {

	int T;
	int N;
	long long arr[102] = { 0, };

	cin >> T;

	for (int n = 0; n < T; n++) {

		cin >> N;

		for (int i = 1; i <= N; i++) {
			if (i <= 3) {
				arr[i] = 1;
			}
			else
				arr[i] = arr[i - 3] + arr[i - 2];
		}
		cout << arr[N] << '\n';

	}
	return 0;
}