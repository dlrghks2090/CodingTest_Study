// ����_2921��_�����3_���̳� ����


#include<iostream>

using namespace std;

int main() {

	int N;
	int sol = 0;

	cin >> N;

	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= i; j++) {
			sol += i + j;
		}
	}

	cout << sol;



	return 0;
}