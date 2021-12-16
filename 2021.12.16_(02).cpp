// 백준_2587번_브론즈2_대표값2 문제

#include<iostream>
#include<algorithm>

using namespace std;

int arr[5];

int main() {

	int mid = 0;
	int aver = 0;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		aver += arr[i];
	}

	sort(arr, arr + 5);

	mid = arr[2];
	aver = aver / 5;

	cout << aver << '\n';
	cout << mid;

	return 0;
}