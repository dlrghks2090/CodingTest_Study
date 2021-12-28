// 백준_순열_10972번_실버3_다음 순열 문제
// 사전순으로 오는 수열의 메커니즘을 파악해서 풀어냈다.
//  =>	끝 수 부터 시작해 arr[i-1] < arr[i] 에서   끝 -> i 로 원소를 확인해 처음 나오는 arr[i-1] 보다 큰 수와 swap 한 뒤 i~끝 을 내림차순 정렬한다.


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


vector<int> arr(10001);
vector<int> fin(10001);

int main() {

	int N;
	int tmp = 0;
	
	cin >> N;

	// 주어진 수 입력
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	// 내림차순 입력
	for (int i = 1; i <= N; i++) {
		fin[i] = N + 1 - i;
	}

	// 입력한 수가 내림차순인 경우 -1 출력
	if (arr == fin) {
		cout << -1;
	}
	// 내림차순이 아닌경우
	else {
		// 수열의 끝부터 
		for (int j = N; j > 1; j--) {
			// 해당 인덱스의 수가 이전 인덱스의 수보다 크면
			if (arr[j - 1] < arr[j]) {
				// 이전 인덱스의 수를 tmp에 저장
				tmp = arr[j - 1];
				// 끝부터 시작해 해당 인덱스 까지 
				for (int k = N; k >= j; k--) {
					// 이전 인덱스의 수보다 첫번째로 커지는 수를 체크
					if (tmp < arr[k]) {
						// 첫번째로 커지는 수와 이전 인덱스의 수 SWAP
						arr[j - 1] = arr[k];
						arr[k] = tmp;
						// 해당 인덱스부터 끝까지 오름차순 정렬
						sort(arr.begin() + j, arr.begin() + 1 + N);
						// for 문 종료
						break;
					}
				}
				// for 문 종료
				break;
			}
		}

		// 정답 출력
		for (int j = 1; j <= N; j++) {
			cout << arr[j] << " ";
		}

	}


	

	return 0;
}