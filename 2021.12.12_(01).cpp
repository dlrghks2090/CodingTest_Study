// 백준_1292번_실버5_쉽게 푸는 문제

#include<iostream>

using namespace std;

int arr[1001];
int main() {
	int num = 1;
	int idx = 1;
	int A, B;
	int sol = 0;


	while (1) {
		for (int i = 1; i <= num; i++) {
			arr[idx] = num;
			++idx;
			if (idx > 1000) {
				break;
			}
		}
		if (idx > 1000) {
			break;
		}
		++num;
	}

	cin >> A >> B;

	for (int i = A; i <= B; i++) {
		sol += arr[i];
	}

	cout << sol;



	return 0;
}