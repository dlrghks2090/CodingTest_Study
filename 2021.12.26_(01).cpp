// 백준_브루트포스_15663번_실버2_N과 M(9) 문제
// 중복을 피하는 방법을 찾는게 핵심인 문제였다.
// 변수 tmp 를 사용해 같은 수열을 또 뽑지 않도록 했다.

#include<iostream>
#include<algorithm>

using namespace std;

int N, M;
int arr[9];
int sol[9];
int ox = 0;
int tmp = 0;

void sequence(int count) {

	if (count > M) {
		for (int i = 1; i <= M; i++) {
			
			cout << arr[sol[i]] << " ";
		}
		cout << '\n';
	}
	else {
		// sol의 새 인덱스 자리의 숫자뽑기를 시작할때 항상 tmp=0 으로 초기화
		tmp = 0;
		for (int i = 1; i <= N; i++) {
			ox = 0;
			// arr배열의 사용한 원소를 다시 쓰지 않도록 sol에 저장되어있는 arr배열의 인덱스를 만나면 ++ox를 해준다.
			for (int j = 1; j <= count - 1; j++) {
				if (sol[j] == i) {
					++ox;
				}
			}

			// 이미 뽑은 수이면 for문 끝으로 이동
			if (ox != 0) {
				continue;
			}
			
			// i-1에서 사용한 수와 같지 않을때 sol의 다음 인덱스값을 뽑도록 한다.
			if (arr[i] != tmp) {
				sol[count] = i;
				sequence(count + 1);
			}
			// sol의 같은 인덱스에 같은 수를 뽑지 않기 위한 장치
			tmp = arr[i];
			

		}
	}

}

int main(){

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	sort(arr + 1, arr + N + 1);

	sequence(1);

	return 0;
 }