// ����_2010��_�����3_�÷��� ����

#include<iostream>

using namespace std;

int arr[500001];

int main() {

	int N;
	int sol = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		sol += arr[i];
		if (i != N) {
			sol -= 1;
		}
	}

	cout << sol;




	return 0;
}