// 백준_10569번_브론즈3_다면체 문제

#include<iostream>

using namespace std;

int main() {

	int T;
	int V, E;
	int sol = 0;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> V >> E;

		sol = (V - E) * (-1) + 2;
		cout << sol << '\n';
	}




	return 0;
}