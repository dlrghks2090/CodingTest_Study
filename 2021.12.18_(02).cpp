// ����_���Ʈ����_14500��_���5_��Ʈ�ι̳� ����
// ���簢�� 4���� �̾���� ��Ʈ�ι̳븦 ���������� ��ġ�� �� �ִ� ���簢�� ������ �������� ������ ����ߴ�.

#include<iostream>
#include<algorithm>

using namespace std;

int arr[501][501];

int main() {

	int N, M;
	int sol = 0;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> arr[i][j];
		}
	}

	// arr[i][j-3]		arr[i][j-2]		arr[i][j-1]		arr[i][j]
	for (int i = 1; i <= N; i++) {
		for (int j = 4; j <= M; j++) {
			sol = max(sol, arr[i][j - 3] + arr[i][j - 2] + arr[i][j - 1] + arr[i][j]);
		}
	}

	// arr[i-3][j]
	// arr[i-2][j]
	// arr[i-1][j]
	// arr[i][j]
	for (int i = 4; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			sol = max(sol, arr[i - 3][j] + arr[i - 2][j] + arr[i - 1][j] + arr[i][j]);
		}
	}

	// arr[i-1][j-2]	arr[i-1][j-1]	arr[i-1][j]
	// arr[i][j-2]		arr[i][j-1]		arr[i][j]
	for (int i = 2; i <= N; i++) {
		for (int j = 3; j <= M; j++) {
			sol = max(sol, arr[i - 1][j] + arr[i][j - 2] + arr[i][j - 1] + arr[i][j]);
			sol = max(sol, arr[i - 1][j-2] + arr[i][j - 2] + arr[i][j - 1] + arr[i][j]);
			sol = max(sol, arr[i - 1][j - 1] + arr[i][j - 2] + arr[i][j - 1] + arr[i][j]);

			sol = max(sol, arr[i - 1][j - 2] + arr[i - 1][j - 1] + arr[i - 1][j] + arr[i][j - 2]);
			sol = max(sol, arr[i - 1][j - 2] + arr[i - 1][j - 1] + arr[i - 1][j] + arr[i][j - 1]);
			sol = max(sol, arr[i - 1][j - 2] + arr[i - 1][j - 1] + arr[i - 1][j] + arr[i][j]);

			sol = max(sol, arr[i - 1][j - 2] + arr[i - 1][j - 1] + arr[i][j - 1] + arr[i][j]);
			sol = max(sol, arr[i - 1][j - 1] + arr[i - 1][j] + arr[i][j - 2] + arr[i][j - 1]);

		}
	}

	// arr[i-2][j-1]	arr[i-2][j]
	// arr[i-1][j-1]	arr[i-1][j]
	// arr[i][j-1]		arr[i][j]
	for (int i = 3; i <= N; i++) {
		for (int j = 2; j <= M; j++) {

			sol = max(sol, arr[i - 2][j] + arr[i - 1][j] + arr[i][j] + arr[i - 2][j - 1]);
			sol = max(sol, arr[i - 2][j] + arr[i - 1][j] + arr[i][j] + arr[i - 1][j - 1]);
			sol = max(sol, arr[i - 2][j] + arr[i - 1][j] + arr[i][j] + arr[i][j - 1]);

			sol = max(sol, arr[i - 2][j - 1] + arr[i - 1][j - 1] + arr[i][j - 1] + arr[i - 2][j]);
			sol = max(sol, arr[i - 2][j - 1] + arr[i - 1][j - 1] + arr[i][j - 1] + arr[i - 1][j]);
			sol = max(sol, arr[i - 2][j - 1] + arr[i - 1][j - 1] + arr[i][j - 1] + arr[i][j]);


			sol = max(sol, arr[i - 2][j - 1] + arr[i - 1][j - 1] + arr[i - 1][j] + arr[i][j]);
			sol = max(sol, arr[i][j - 1] + arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 2][j]);

		}
	}

	// arr[i-1][j-1]	arr[i-1][j]
	// arr[i][j-1]		arr[i][j]
	for (int i = 2; i <= N; i++) {
		for (int j = 2; j <= M; j++) {
			sol = max(sol, arr[i - 1][j - 1] + arr[i - 1][j] + arr[i][j - 1] + arr[i][j]);
		}
	}

	cout << sol;

	return 0;
}