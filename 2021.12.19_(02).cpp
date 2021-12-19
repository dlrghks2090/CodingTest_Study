// ����_���Ʈ����_6064��_�ǹ�1_ī�� �޷� ����
// 1. �ִ� Ȯ�� ������ �ּҰ������ ����� ���Ѵ�.
// 2. �޷��� x�� �Ǵ� ���� Ȯ���ϵ��� for���� M��ŭ �߰��ϸ鼭 Ȯ���� �ð��� ���δ�.

// �ð� �ʰ��� ��� Ʋ�ȴ� ��������. for���� ������ ���� �� �־���.

#include<iostream>

using namespace std;


// ��Ŭ���� ȣ������ ����� �ִ� ������� ���ϴ� �Լ�
int gcd(int a, int b) {

	while (b != 0) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

// �ּҰ���� ���ϴ� �Լ�
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		int M, N, x, y;
		int ox = 0;
		int a = 0;
		int b = 0;
		cin >> M >> N >> x >> y;

		// �޷��� x�� �Ǵ� ���� Ȯ���ϵ��� for���� M��ŭ �߰��ϸ鼭 Ȯ���� �ð��� �ٿ���.
		for (int j = x; j <= lcm(M, N); j += M) {

			b = (j % N == 0) ? N : j % N;
			
			if (b == y) {
				cout << j << '\n';
				++ox;
				break;
			}

			++a;
			++b;
		}
		// ���� �ش�������� ã�� ���ߴٸ� -1 ���
		if (ox == 0) {
			cout << -1 << '\n';
		}
	}



	return 0;
}