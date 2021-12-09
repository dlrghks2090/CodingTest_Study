// 백준_2592번_브론즈2_대표값 문제

#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[10] = { 0, };
	int sol = 0;
	int mode = 0;
	int mode_c = 0;
	int count = 0;

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		sol += arr[i];
	}

	sort(arr, arr + 10);

	count = 1;
	mode = arr[0];
	mode_c = 1;
	for (int i = 1; i < 10; i++) {
		if (arr[i - 1] == arr[i]) {
			++count;
			if (mode_c < count) {
				mode_c = count;
				mode = arr[i];
			}
			
		}
		else {
			count = 1;
		}
	}

	cout << sol / 10 << '\n';
	cout << mode;




	return 0;
}
