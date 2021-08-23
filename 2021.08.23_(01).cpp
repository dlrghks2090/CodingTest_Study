#include<iostream>

using namespace std;

// N = 3�� N = 9�� �������� ���� ���ﶧ,
// i%3 ==1 && j%3 ==1 �϶�, ���� ä���� �ʴ´�

// N=9�϶�, ��� �� �κ��� ��������� �ϴ� ��츦 �����ϸ�
// i / 3) % 3 == 1 && (j / 3) % 3 == 1 �϶�, ���� ä���� �ʴ´�.

// �̸� �̿��� �Ʒ� �Լ��� �������.

void starpoint(int i, int j, int num) {

	if ((i / num) % 3 == 1 && (j / num) % 3 == 1) {
		cout << ' ';
	}
	else {
		if (num / 3 == 0) {
			cout << '*';
		}
		else
			starpoint(i,j,num/3);
	}

}

int main() {

	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {	// y��ǥ
		for (int j = 0; j < N; j++) {	// x��ǥ
			starpoint(i,j,N);
		}
		cout << '\n';
	}


	return 0;
}