#include<iostream>
#include<vector>

using namespace std;


// ���� �Ҽ����� �Ǻ��ϴ� �Լ�
bool sosu(int n) {

	int count = 0;

	for (int i = 1; i * i <= n; i = i+2) {
		if (n % i == 0) {
			++count;
		}
	}

	if (count == 1) {
		return true;
	}
	else {
		return false;
	}


}


int main() {

	vector<int> v;
	int num;
	int ox = 0;

	while (1) {
		cin >> num;
		if (num == 0) {
			break;
		}
		else {
			v.push_back(num);
		}
	}

	for (int i = 0; i < v.size(); i++) {
		// �� Ȧ���� �Ҽ��� ���� �ش� ¦���� �� �� �ִ����� ã������ for��
		for (int j = 3; j <= v[i] / 2; j = j + 2) {
			// �� �� ��� �Ҽ��̸� ���     (�ش� ¦�� = a + b ��� �Ҷ�, ���� ���� ���� ������ b-a�� �ִ��� Ȧ�� �Ҽ��̴�.)
			if (sosu(j) && sosu(v[i] - j)) {
				++ox;
				cout << v[i] << " = " << j << " + " << v[i] - j << '\n';
				break;
			}
		}
		if (ox == 0) {
			cout << "Goldbach's conjecture is wrong." << '\n';
		}
		ox = 0;
	}


	return 0;
}