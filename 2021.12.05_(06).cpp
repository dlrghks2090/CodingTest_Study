// 백준_10867번_실버5_중복 빼고 정렬하기 문제

#include<iostream>
#include<algorithm>

using namespace std;


int arr[100001];
int main() {

	int N;
	int num = 0;

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	sort(arr + 1, arr + 1 + N);

	num = arr[1];
	cout << num << " ";
	for (int i = 2; i <= N; i++) {
		if (num != arr[i]) {
			num = arr[i];
			cout << num << " ";
		}
	}


	return 0;
}