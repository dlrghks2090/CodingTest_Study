// 백준 수학_10954_브론즈2
// A+B-6 문제

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	int* A;
	int* B;
	string* str;

	cin >> T;
	A = new int[T];
	B = new int[T];
	str = new string[T];

	
	for (int i = 0; i < T; i++) {
		cin >> str[i];
	}


	for (int i = 0; i < T; i++) {
		A[i] = (int)str[i][0]-48;
		B[i] = (int)str[i][2]-48;
	}
	for (int i = 0; i < T; i++) {
		cout << A[i] + B[i] << '\n';
	}


	delete[] A;
	delete[] B;
	delete[] str;

	return 0;
}