// ���� ����_2750��
// �� �����ϱ� ����
// N���� ���� �־����� ��, ������������ �����ϴ� ���α׷��� �ۼ��϶�.

#include <iostream>

using namespace std;

int main() {

	int N;
	int n;
	int* arr;
	int tmp = 0;


	cin >> N;
	arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> n;
		arr[i] = n;
		n = 0;
	}

	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < N-1-i; j++) {
			if ( arr[j] > arr[j + 1] ) {
				tmp = arr[j + 1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
				tmp = 0;
			}
		}

	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << endl;
	}

	delete[] arr;
	return 0;
}