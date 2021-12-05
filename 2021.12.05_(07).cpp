// 백준_10816번_실버4_숫자 카드2 문제
// 이진 탐색의 upper_bound 와 lower_bound의 사용법을 배운 문제이다.

#include<iostream>
#include<algorithm>

using namespace std;

int arr1[500001];
int sol[500001];


int main() {


	// 입출력의 시간을 최소로 줄이기 위한 장치
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	int mnum = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr1[i];
	}

	// arr1 오름차순으로 정렬
	sort(arr1 + 1, arr1 + 1 + N);

	cin >> M;

	// M 개의 원소가 하나씩 입력될 때마다 N개의 원소를 가진 arr1에서 mnum과 같은값이 몇 개나 있는지 출력
	for (int i = 1; i <= M; i++) {
		cin >> mnum;

		// Lower bound	(<=)
		// - 선형 구조의 부분 탐색법이다. 이분 탐색과 거의 다를것이 없다.
		// - target 값이 있다면 target 값보다 같거나 큰 첫 번째 위치를 말한다.
		// 
		// Upper bound	(<)
		// - target보다 큰 첫 번째 위치를 말한다.
		// 
		//위 둘의 차이점은 '=' 의 유무이다.
		cout << upper_bound(arr1 + 1, arr1 + 1 + N, mnum) - lower_bound(arr1 + 1, arr1 + 1 + N, mnum) << " ";
	}
	

	


	return 0;
}

/*

int lower_binary(int*arr,int target,int size) {
	int mid, start, end;
	start = 0, end = size - 1;

	while (end > start){
		mid = (start + end) / 2;
		if (arr[mid] >= target)
			end = mid;
		else start = mid + 1;
	}
	return end;
}

int upper_binary(int*arr, int target,int size) {
	int mid, start, end;
	start = 0, end = size - 1;

	while (end > start) {
		mid = (start + end) / 2;
		if (arr[mid] > target)
			end = mid;
		else start = mid + 1;
	}
	return end;
}

*/