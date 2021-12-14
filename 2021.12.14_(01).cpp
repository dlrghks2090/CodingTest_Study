// 백준_10807번_브론즈2_개수 세기 문제

#include<iostream>

using namespace std;

int arr[101];

int main() {

	int N;
	int v;
	int count = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	cin >> v;

	for (int i = 0; i < N; i++) {
		if (v == arr[i]) {
			++count;
		}
	}

	cout << count;


	return 0;
}