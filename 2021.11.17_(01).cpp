// ����_10833��_�����3_��� ����

#include<iostream>

using namespace std;

int main() {

	int N;
	int arr[101][2] = { 0, };
	int sol = 0;

	cin >> N;


	for (int i = 1; i <= N; i++) {
		cin >> arr[i][0] >> arr[i][1];

		sol += arr[i][1] % arr[i][0];
	}

	cout << sol;


	return 0;
}