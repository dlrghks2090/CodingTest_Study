#include<iostream>

using namespace std;

// N = 3과 N = 9를 기준으로 식을 세울때,
// i%3 ==1 && j%3 ==1 일때, 별을 채우지 않는다

// N=9일때, 가운데 빈 부분을 빈공간으로 하는 경우를 생각하면
// i / 3) % 3 == 1 && (j / 3) % 3 == 1 일때, 별을 채우지 않는다.

// 이를 이용해 아래 함수를 만들었다.

void starpoint(int i, int j, int num) {

	if ((i / num) % 3 == 1 && (j / num) % 3 == 1) {
		cout << ' ';
	}
	else {
		if (num / 3 == 0) {
			cout << '*';
		}
		else
			starpoint(i,j,num/3);
	}

}

int main() {

	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {	// y좌표
		for (int j = 0; j < N; j++) {	// x좌표
			starpoint(i,j,N);
		}
		cout << '\n';
	}


	return 0;
}