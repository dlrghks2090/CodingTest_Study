// ���� ���ʼ���2_4948��
// ����Ʈ�� ���� ����
// ����Ʈ�� ������ "�ڿ��� n�� ���Ͽ�, n���� ũ��, 2n���� �۰ų� ���� �Ҽ��� ��� �ϳ� �����Ѵ�"�� ������ ��� �ִ�.
// �ڿ��� n�� �־����� �� m���� ũ��, 2n���� �۰ų� ���� �Ҽ��� ������ ���ϴ� ���α׷��� �ۼ��ض�.

#include <iostream>
#include <vector>

using namespace std;

int sosu(int n) {

	int ox = 0;
	int count = 0;

	for (int i = n+1; i <= 2 * n; i++) {
		if (i > 10) {
			if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
				continue;
		}
		if (i > 100) {
			if (i % 11 == 0 || i % 13 == 0 || i % 17 == 0 || i % 19 == 0 || i % 23 == 0)
				continue;
		}
		// �ش� ������ �����ٱ����� Ȯ���Ѵ�.
		for (int j = 2; j*j <= i; j++) {
			if (i % j == 0) {
				ox = 1;
				break;
			}
				
		

		}
		if (ox == 0)
			++count;
		ox = 0;
	}

	return count;
}


int main() {

	int n;
	vector<int> v;

	while (1) {
		cin >> n;
		if (n == 0)
			break;
		v.push_back(n);
		n = 0;
	}

	for (int i = 0; i < v.size(); i++) {
		cout << sosu(v[i]) << endl;
	}


	return 0;
}