// ����_������ �� ���շ�_3036��_�ǹ�3_�� ����

// ����Ǯ��>
// 
//		���� �ѷ� = ������ * 2 * pi
//
//		�ش� �������� 2 * pi �� ���ǹǷ�
//		�ᱹ, �� ���� ���������� ����Ͽ� ������ Ǯ�� �ȴ�.
//		���м� ���·� ����ϴ� ���� 
//		��Ŭ���� ȣ������ ����Ͽ� ���� �ִ� ������� �� ���ڿ� �и� �κ��� ������ ǥ���Ѵ�.


#include<iostream>


// ���� �ѷ� = ������ * 2 * pi

using namespace std;


int main() {

	int N;
	int* arr;
	int x, y;
	int tmp = 10;

	cin >> N;

	arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i < N; i++) {
		if (arr[0] > arr[i]) {
			x = arr[0];
			y = arr[i];
			//��Ŭ���� ȣ������ ����� �ִ������� ���Ѵ�.
			while (tmp != 0) {
				tmp = x % y;
				x = y;
				y = tmp;
			}
		}
		else {
			x = arr[i];
			y = arr[0];
			//��Ŭ���� ȣ������ ����� �ִ������� ���Ѵ�.
			while (tmp != 0) {
				tmp = x % y;
				x = y;
				y = tmp;
			}
		}
		// �ִ������� x��
		cout << arr[0] / x << "/" << arr[i] / x<< '\n';

		tmp = 10;
	}




	delete[] arr;

	return 0;
}