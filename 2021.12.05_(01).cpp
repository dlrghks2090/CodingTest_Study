// ����_10569��_�����3_�ٸ�ü ����

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