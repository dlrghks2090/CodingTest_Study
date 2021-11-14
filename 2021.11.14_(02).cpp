// 백준_10984번_브론즈3_내 학점을 구해줘 문제
// 평점 계산하는 방법에서 고민한 문제였다. 그외에는 고민할만한 요소가 없던 문제였다.


#include<iostream>

using namespace std;

int main() {

	int T;
	int N;
	int* C;
	double* G;
	int total = 0;
	double ever = 0.0;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;
		C = new int[N];
		G = new double[N];

		for (int j = 0; j < N; j++) {
			cin >> C[j] >> G[j];
		}

		for (int k = 0; k < N; k++) {
			total += C[k];
			ever += G[k]*C[k];
		}
		ever = ever / total;

		// 소숫점 아래 1자리까지만 출력되도록 설정
		cout << fixed;
		cout.precision(1);

		cout << total << " " << ever << '\n';
		
		total = 0;
		ever = 0;

	}





	return 0;
}