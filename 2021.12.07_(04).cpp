// ����_2506��_�����3_������� ����

#include<iostream>

using namespace std;

int main() {

	int N;
	int arr[101] = { 0, };
	int arr2[101] = { 0, };
	int sol = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		if (arr[i] == 1) {
			arr2[i] = arr2[i - 1] + 1;
			sol += arr2[i];
		}
	}

	cout << sol;



	return 0;
}