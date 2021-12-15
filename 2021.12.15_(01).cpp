// 백준_2822번_실버5_점수 계산 문제
// sort STL을 사용해 풀어냈다.
// 상황에 맞게 정렬하기 위해 compare , compare2 를 만들어 sort를 실행했다.

#include<iostream>
#include<algorithm>

using namespace std;

struct score {
	int s;
	int num;
};

// 최상위 점수 5개를 뽑아내기위한 비교함수
bool compare(score a, score b) {

	if (a.s < b.s) {
		return true;
	}
	else if (a.s >= b.s) {
		return false;
	}

}
// 추려진 5개의 점수를 입력순으로 정렬하기 위한 비교함수
bool compare2(score a, score b) {
	if (a.num < b.num) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	score sc[8];
	int sol = 0;

	for (int i = 0; i < 8; i++) {
		cin >> sc[i].s;
		sc[i].num = i+1;
	}


	// 점수 오름차순으로 정렬
	sort(sc,sc+8, compare);


	for (int i = 7; i >= 3; i--) {
		sol += sc[i].s;
	}

	// 최상위 5개 점수의 합 출력
	cout << sol << '\n';


	// 최상위 5개만 num을 오름차순으로 정렬
	sort(sc + 3, sc + 8, compare2);

	for (int i = 3; i < 8; i++) {
		cout << sc[i].num << " ";
	}



	return 0;
}