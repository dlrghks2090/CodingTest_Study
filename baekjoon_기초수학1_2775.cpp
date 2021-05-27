// 백준 기초수학1_2775번
// 부녀회장이 될테야 문제
// 아파트에 거주하려면 "a층의 b호에 살려면 자신의 아래(a-1)층의 1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와 살아야 한다."
// 아파트에 빈집이 없고 모든 거주민들이 위의 조건을 지키고 있다고 할 때, 
// 주어진 양의 정수 k 와 n 에 대해 k층 n호에 몇명이 살고 있는지 출력하는 프로그램을 작성하라.

#include <iostream>

using namespace std;

int main() {

	int T;
	int* k;
	int* n;;
	int* arr;
	int* arr_;
	
	cin >> T;
	k = new int[T];
	n = new int[T];

	for (int i = 0; i < T; i++) {

		cin >> k[i] >> n[i];

	}
	
	// 테스트 케이스 수만큼 수행
	for (int i = 0; i < T; i++) {
		arr = new int[n[i]+1];
		arr_ = new int[n[i] + 1];
		// 해당 층까지 계산하기 위한 반복문
		for (int j = 0; j <= k[i]; j++) {
			// 해당 호수까지 계산하기 위한 반복문
			for (int m = 1; m <= n[i]; m++) {
				if (j == 0) {
					arr[m] = m;
					arr_[m] = m;
				}
				else {
					arr[m] = 0;
					// 해당 호수에 살고 있는 사람들을 구하는 반복문
					for (int l = 1; l <= m; l++) {
						
						arr[m] += arr_[l];	
					}	
				}
			}
			for (int y = 1; y <= n[i]; y++) {
				arr_[y] = arr[y];
			}	
		}
		// 각 테스트 케이스별 결과값을 출력
		cout<< arr[n[i]] << endl;
	}


	return 0;
}