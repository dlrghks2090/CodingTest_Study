// 백준 수학_2748번
// 피보나치 수 2 문제

#include<iostream>


using namespace std;


int main() {

	int n;
	// 피보나치수는 직전의 두 수만 필요하므로 arr[2]만으로 메모리 낭비를 줄였다.
	unsigned long long int arr[2] = { 0, };  // 수가 커질 때를 대비해 int를 unsigned long long으로 선언
	
	cin >> n;

	for (int i = 0; i <= n; i++) {
		if (i == 0)
			arr[0] = 0;
		if (i == 1)
			arr[1] = 1;

		if (i % 2 == 0)
			arr[0] = arr[0] + arr[1];
		else if (i % 2 == 1)
			arr[1] = arr[0] + arr[1];
			
	}
	if (n % 2 == 0)
		cout << arr[0];
	else if (n % 2 == 1)
		cout << arr[1];

	return 0;
}