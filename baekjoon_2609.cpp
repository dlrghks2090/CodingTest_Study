// ����_2609��
// �ִ������� �ּҰ���� ����

#include <iostream>
#include <vector>


using namespace std;

int main() {

	int A;
	int B;
	int low;
	int A_last = 0;
	int B_last = 0;
	int max_gongyak = 1;
	vector<int> gongyak;

	cin >> A >> B;

	if (A > B)
		low = B;
	else
		low = A;

	for (int i = low; i >= 1; i--) {
		if (A % i == 0 && B % i == 0) {
			gongyak.push_back(i);
			A = A / i;
			B = B / i;
		}
		A_last = A;
		B_last = B;
	}

	for (int i = 0; i < gongyak.size(); i++) {
		max_gongyak *= gongyak[i];
	}

	cout << max_gongyak << endl << max_gongyak * A_last * B_last;




	return 0;
}