// ���� ���ʼ���2_11653��
// ���μ�����
// ���� N�� �־����� ��, ���μ������ϴ� ���α׷��� �ۼ��ض�.

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N;
	int Quotient = 0; //��
	int i = 2;
	vector<int> v;

	cin >> N;
	Quotient = N;

	while (Quotient >= i) {

		if (Quotient % i == 0) {
			v.push_back(i);
			Quotient = Quotient / i;
		}
		else {
			++i;
		}
		
	}

	for(int j = 0; j < v.size(); j++) {
		cout << v[j] << endl;
	}

	return 0;
}