//백준_5054번_브론즈2_주차의 신 문제

#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int t;
	int n;
	int arr[100] = { 0, };
	int sol;

	cin >> t;

	for (int i = 0; i < t; i++) {
		sol = 0;
		fill_n(arr, 100, 0);
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + n);
		sol = 2 * (arr[n - 1] - arr[0]);

		cout << sol << '\n';
	}



	return 0;
}