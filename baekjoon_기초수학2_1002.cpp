// ���� ���ʼ���2_1002��
// �ͷ� ����
// �� ��ǥ �� �� ��ǥ���� ��ǥ�������� �Ÿ��� �־��� ��, ������ ��ǥ������ ��ġ ������ ����϶�.
// (x1,y1)  (x2,y2)   :  �� ��ǥ�� ��ġ
// r1, r2  : �� ��ǥ���� ��ǥ���������� �Ÿ�
// �� ������ ��ǥ������ ������ ���Ѵ��� ��� -1�� ����Ѵ�.

#include <iostream>

using namespace std;

int main() {

	int T;
	int* x1;
	int* y1;
	int* r1;
	int* x2;
	int* y2;
	int* r2;
	int o1_o2_2 = 0;
	int r1_r2_2 = 0;
	int big_r = 0;
	int low_r = 0;

	cin >> T;

	x1 = new int[T];
	y1 = new int[T];
	r1 = new int[T];
	x2 = new int[T];
	y2 = new int[T];
	r2 = new int[T];

	for (int i = 0; i < T; i++) {
		cin >> x1[i] >> y1[i] >> r1[i] >> x2[i] >> y2[i] >> r2[i];
	}

	for (int i = 0; i < T; i++) {

		// r�� ũ�Ⱑ �� ū�Ͱ� ������ ����
		if (r1[i] > r2[i]) {
			big_r = r1[i];
			low_r = r2[i];
		}
		else {
			big_r = r2[i];
			low_r = r1[i];
		}

		// �־��� ���� ������ �Ÿ��� ������ r���� ���� ����
		o1_o2_2 = (x1[i] - x2[i]) * (x1[i] - x2[i]) + (y1[i] - y2[i]) * (y1[i] - y2[i]);
		r1_r2_2 = (r1[i] + r2[i]) * (r1[i] + r2[i]);
		// �� ���� ���μ�
		if (o1_o2_2 > r1_r2_2) {
			cout << 0 << endl;
		}
		// �� ���� �������� ����
		else if (o1_o2_2 == r1_r2_2) {
			cout << 1 << endl;
		}
		// �� ���� �� ������ ������
		else if (o1_o2_2 < r1_r2_2 && o1_o2_2 > (big_r - low_r) * (big_r - low_r)) {
			cout << 2 << endl;
		}
		// �� ���� ����
		else if (o1_o2_2 == (big_r - low_r) * (big_r - low_r)) {
			// �� ���� �������� ���� ��
			if (r1[i] == r2[i]) {
				cout << -1 << endl;
			}
			// �� ���� �������� �ٸ� ��
			else
				cout << 1 << endl;
		}
		// �� ���� �ѿ� ���ο� ���� ��
		else if (o1_o2_2 < (big_r - low_r) * (big_r - low_r)) {
			// �� ���� �������� �ٸ� ��
			if (r1[i] != r2[i]) {
				cout << 0 << endl;
			}
			// �� ���� �������� �ٸ� ��
			else
				cout << 2 << endl;
		}

	}


	return 0;
}