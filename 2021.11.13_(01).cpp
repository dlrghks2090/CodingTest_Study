// ����_2443��_�����3_�� ���-6 ����

#include<iostream>

using namespace std;

int dp[1001];

int main() {
	int N;

	cin >> N;

	for (int i = 1;  i <= N; i++) {

		for (int k = 1; k < i; k++) {
			cout << " ";
		}
		for (int j = 0; j <= (N-i)*2; j++) {
			cout << "*";
		}
		cout << '\n';
	}


	return 0;
} 