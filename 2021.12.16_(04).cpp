// ����_5800��_�ǹ�5_���� ��� ����
// algorithm ���̺귯���� sort STL�� ����� ���� Ǯ��´�.
// ���������� �� ���� �������� greater<int>() �� �߰��� �ش�.

#include<iostream>
#include<algorithm>

using namespace std;

int arr[51];

int main() {

	int K;
	int N;
	int gap;

	cin >> K;

	for (int i = 1; i <= K; i++) {
		gap = 0;
		cout << "Class " << i << '\n';
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + N, greater<int>());
		for (int jj = 1; jj < N; jj++) {
			gap = max(gap, arr[jj-1] - arr[jj]);
		}

		cout << "Max " << arr[0] << ", Min " << arr[N - 1] << ", Largest gap " << gap << '\n';
	}
	


	return 0;
}