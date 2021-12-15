// 백준_2693번_실버5_N번째 큰 수 문제
// STL sort() 를 사용해 오름차순으로 정렬해 3번째 큰값을 찾아내었다.

#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int T;
	int arr[10] = { 0, };

	cin >> T;
	for (int k = 0; k < T; k++) {
		// 배열의 원소들을 0으로 초기화
		fill_n(arr, 10, 0);
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		// 오름차순 정렬
		sort(arr, arr + 10);
		// 3번째 큰 수 출력
		cout << arr[7] << '\n';
	}


	return 0;
}