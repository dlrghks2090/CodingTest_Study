// 백준_5565번_브론즈3_영수증 문제

#include<iostream>


using namespace std;

int main() {

	int total;
	int arr[9] = { 0, };
	int a = 0;

	cin >> total;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		a += arr[i];
	}

	cout << total - a;

	



	return 0;
}