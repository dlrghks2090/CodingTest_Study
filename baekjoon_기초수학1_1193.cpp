// ���� ���ʼ���1_1193��
// �м�ã�� ����
// 1/1 -> 1/2 -> 2/1 -> 3/1 -> 2/2 -> 1/3 -> 1/4 -> ...... �� ������� 1�� 2�� 3�� .... �м���� �Ѵ�.
// X�� �־�����, X ��° �м��� ���ϴ� ���α׷��� �ۼ��϶�.


#include <iostream>


using namespace std;



int main() {

	int X;
	int x_ = 0;
	int Num = 1;

	cin >> X;

	x_ = X;

	
	

	while (Num <= x_) {
		x_ -= Num;
		Num++;
	}

	if (x_ == 0) {
		if ((Num - 1) % 2 == 0)
			cout << Num - 1 << "/" << 1;
		else
			cout << 1 << "/" << Num - 1;
	}
	else {
		if (Num % 2 == 0)
			cout << x_ << "/" << Num - x_ + 1;
		else
			cout << Num - x_ + 1 << "/" << x_;
		
	}


	return 0;
}
