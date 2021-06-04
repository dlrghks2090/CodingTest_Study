// 백준 수학_5543번
// 상근날드 문제

#include <iostream>


using namespace std;


int main() {

	int arr[5];
	int min_burger;
	int min_soda;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	min_burger = arr[0];
	for (int i = 1; i <= 2; i++) {
		if (min_burger > arr[i])
			min_burger = arr[i];
	}
	if (arr[3] > arr[4])
		min_soda = arr[4];
	else
		min_soda = arr[3];

	cout << min_burger + min_soda - 50;



	return 0;
}