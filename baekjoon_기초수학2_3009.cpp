// ���� ���ʼ���2_3009��
// �� ��° �� ����
// �� ���� �־�������, �࿡ ������ ���簢���� ����� ���ؼ� �ʿ��� �� ���� ���� ã�� ���α׷��� �ۼ��϶�.

#include <iostream>

using namespace std;

int main() {

	int x[3];
	int y[3];
	int x_ = 0;
	int y_ = 0;

	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < 3; i++) {
		
	}
	if (x[0] == x[1])
		x_ = x[2];
	else if (x[1] == x[2])
		x_ = x[0];
	else if (x[2] == x[0])
		x_ = x[1];

	if (y[0] == y[1])
		y_ = y[2];
	else if (y[1] == y[2])
		y_ = y[0];
	else if (y[2] == y[0])
		y_ = y[1]; 

	cout << x_ << " " << y_;

	return 0;
}