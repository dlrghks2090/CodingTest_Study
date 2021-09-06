#include<iostream>

using namespace std;

// 일반적인 STL sort로 풀면 메모리를 초과하게 된다.
// 따라서 입력한 수의 갯수를 카운팅하여 오름차순으로 출력하도록 만들었다.

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int arr[10001] = { 0 };
	int a;

	cin >> N;


	for (int i = 0; i < N; i++) {
		
		cin >> a;
		arr[a] += 1;
	}
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << '\n';
		}
	}



	return 0;
}