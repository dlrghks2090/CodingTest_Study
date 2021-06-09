// ���� ���_11729��_<�ǹ�2>
// �ϳ��� ž �̵� ���� ����

#include<iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int from, int by, int to) {

	if (n == 1)
		cout << from << " " << to << '\n';
	else {
		hanoi(n - 1, from, to, by);
		cout << from << " " << to <<'\n';
		hanoi(n - 1, by, from, to);
	}
	


}

int main() {

	// c++�� ����� �ӵ��� ���̱� ���� �ڵ�
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	cout << (int)pow(2, N) - 1 << '\n';  // endl ��� '\n'�� ����Ͽ� �ð��� �ٿ���.
	hanoi(N, 1, 2, 3);



	return 0;
}