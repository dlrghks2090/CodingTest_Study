#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int arr[500001] = { 0, };	// 입력값을 저장하는 배열
int m[500001] = { 0, };		// 최빈값을 저장하는 배열

int main() {

	int N;
	int mean = 0;	// 산술평균
	int median = 0;		// 중앙값
	int mode = 0;		// 최빈값
	int range = 0;		// 범위

	// 최빈값을 구하는데 상요하는 변수들
	int count = 0;
	int max_count = 0;
	int same_mode = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	//산술평균
	for (int i = 0; i < N; i++) {
		mean += arr[i];
	}
	mean = round((double)mean/N);  // round함수를 사용해 소수점 밑에서 반올림을 해주었습니다.

	//중앙값
	if (N > 1) {
		// 오름차순 정렬
		sort(arr, arr + N);
		median = arr[N / 2];	// 입력값의 개수는 항상 홀수 이므로 입력개수가 1개가 아닐 때의 중앙값
	}
	else
		median = arr[0];

	//최빈값
	count = 1;	// 같은 수의 빈도수 체크
	max_count = 1;	// 최빈값의 빈도수 체크
	same_mode = 1;	// 최빈값의 개수를 체크
	m[0] = arr[0];	// 최빈값을 저장하는곳의 첫번째를 arr[0]으로 초기값 설정
	mode = arr[0];	// 최빈값의 결과를 arr[0]으로 초기값 설정
	for (int i = 1; i < N; i++) {

		if (arr[i] == arr[i - 1]) {
			++count;
		}
		else
			count = 1;

		if (count == max_count) {
			m[same_mode] = arr[i];
			++same_mode;
		}
		else if (count > max_count) {
			max_count = count;
			same_mode = 1;
			m[0] = arr[i];
		}
	}
		// 최빈값이 여러개일 경우 2번째로 작은 값을 출력
	if (same_mode == 1)
		mode = m[0];
	else
		mode = m[1];

	//범위
	range = arr[N - 1] - arr[0];

	cout << mean << '\n' << median << '\n' << mode << '\n' << range << '\n';

	return 0;
}