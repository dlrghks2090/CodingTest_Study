// 백준 브루트 포스_7568번_<실버5>
// 덩치 문제
// 사람들의 몸무게와 키의 정보가 주어진다.
// 이 때, 몸무게와 키가 둘다 상대보다 크면 "큰 덩치" 라고 한다.
// 사람 별 덩치의 순위를 출력하라.

#include <iostream>

using namespace std;

int main() {

	int N;

	int* w;  // 사람의 몸무게를 저장하는 동적배열
	int* h;  // 사람의 키를 저장하는 동적배열
	int* grade;  // 덩치의 순위를 저장하는 동적배열

	cin >> N;

	w = new int[N];
	h = new int[N];

	grade = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> w[i] >> h[i];
	}

	// 몸무게와 키가 둘다 비교대상보다 작을 때, 등수를 1만큼 내린다. 
	for (int i = 0; i < N; i++) {
		grade[i] = 1;
		for (int j = 0; j < N; j++) {
			if (i == j)
				continue;
			if (w[i] < w[j] && h[i] < h[j]) {
				++grade[i];
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << grade[i] << " ";
	}


	delete[] w;
	delete[] h;
	delete[] grade;

	return 0;
}