// ����_5176��_�����2_��ȸ �ڸ� ����

#include<iostream>
#include<vector>

using namespace std;

int arr[501];

int main() {

	int K;
	int sol;

	cin >> K;

	for (int i = 0; i < K; i++) {
		int P, M;
		int ox = 0;
		vector<int> v;
		sol = 0;
		cin >> P >> M;
		for (int j = 1; j <= P; j++) {
			ox = 0;
			cin >> arr[j];
			for (int jj = 0; jj < v.size(); jj++) {
				if (v[jj] == arr[j]) {
					++sol;
					++ox;
					break;
				}
			}
			if (ox == 0) {
				v.push_back(arr[j]);
			}

		}
		cout << sol << '\n';
	}


	return 0;
}