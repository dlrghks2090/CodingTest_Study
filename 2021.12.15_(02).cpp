// ����_2693��_�ǹ�5_N��° ū �� ����
// STL sort() �� ����� ������������ ������ 3��° ū���� ã�Ƴ�����.

#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int T;
	int arr[10] = { 0, };

	cin >> T;
	for (int k = 0; k < T; k++) {
		// �迭�� ���ҵ��� 0���� �ʱ�ȭ
		fill_n(arr, 10, 0);
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		// �������� ����
		sort(arr, arr + 10);
		// 3��° ū �� ���
		cout << arr[7] << '\n';
	}


	return 0;
}