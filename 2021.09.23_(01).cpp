// ����_������ �� ���շ�_1676��_�ǹ�4_���丮�� 0�� ���� ����
// N! ���� �ڿ��� ���� ó�� 0�� �ƴ� ���ڰ� ���� ������ 0�� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// => �ᱹ N!�� 10�� ��� ������ �ֳĸ� ���� �����̴�.
//		=> 5�� ��� �������ִ����� �ǰ��� ���µ� N<=300 �̹Ƿ� 125, 25, 5 �� �Ǻ��ϴ� ���̴�.
//		=> 1���� N���� ���� �Ǻ����� �μ��� �ִ� ������ ���ϸ� �Ǵ� �����̴�.

#include<iostream>

using namespace std;

int main() {

	int N;
	int count = 0;

	cin >> N;

	for (int i = 0; i <= N; i++) {
		if (i != 0) {
			if (i % 125 == 0) {
				count += 3;
			}
			else if (i % 25 == 0) {
				count += 2;
			}
			else if (i % 5 == 0) {
				count += 1;
			}
		}
	}

	cout << count;



	return 0;
}