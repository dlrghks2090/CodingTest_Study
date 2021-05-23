// ���� ���_10870��
// �Ǻ���ġ �� 5 ����
// �Ǻ���ġ�� 0�� 1�� �����Ѵ�. 0��° �Ǻ���ġ ���� 0, 1��° �Ǻ���ġ ���� 1�̴�.
// 2��°���ʹ� �ٷ� �� �� �Ǻ���ġ ���� ���� �ȴ�.
// n�� �Է����� �־�����, n��° �Ǻ���ġ ���� ���ϴ� ���α׷��� �ۼ��ض�.

#include <iostream>

using namespace std;

int main() {

	int n;
	int* arr;

	cin >> n;
	arr = new int[n+1];

	if (n == 0) {
		cout << 0;
	}
	else if (n == 1) {
		cout << 1;
	}
	else {
		for (int i = 0; i <= n; i++) {
			if (i == 0)
				arr[i] = 0;
			else if (i == 1)
				arr[i] = 1;
			else {
				arr[i] = arr[i - 1] + arr[i - 2];
			}
		}
		cout << arr[n];

	}
	
	delete[] arr;
	return 0;
}