// 백준_정렬_18870번_실버2_좌표 압축 문제
// 입력하는 N개의 수에서 각 수보다 작은 수를 중복없이 출력하는 문제


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// 입력하는 수의 정보를 저장하기 위한 구조체
struct Coor {
	int num;		// 수 입력
	int order;		// 입력순서를 기억하기위한 변수
	int sol;		// 해당 수보다 작은 수의 숫자를 저장하는 변수
};


// 수의 크기를 오름차순으로 정렬하기 위한 함수
bool compare(Coor a, Coor b) {
	if (a.num < b.num) {
		return true;
	}
	else if (a.num == b.num) {
		return a.order < b.order;
	}
	else {
		return false;
	}

}


// 수를 입력순으로 되돌리기 위한 함수
bool compare2(Coor a, Coor b) {
	if (a.order < b.order) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int N;	// 1<= N <= 1000000
	vector<Coor> v(1000001);
	int count = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> v[i].num;
		v[i].order = i;
	}

	//수를 오름차순으로 정렬
	sort(v.begin(), v.begin()+N, compare);

	v[0].sol = 0;
	for (int i = 1; i < N; i++) {
		if (v[i - 1].num != v[i].num) {
			++count;		// sol값을 찾기위한 장치
			v[i].sol = count;
		}
		else {
			v[i].sol = count;
		}
	}

	// 수를 입력순으로 되돌린다.
	sort(v.begin(), v.begin() + N, compare2);

	for (int i = 0; i < N; i++) {
		cout << v[i].sol << " ";
	}





	return 0;
}