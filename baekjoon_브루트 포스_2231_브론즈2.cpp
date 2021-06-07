// 백준 브루트 포스_2231번
// 분해합 문제_난이도: 브론즈2
// 245의 분해합 : 245+2+4+5 = 256 이된다.
// 245는 256의 생성자라고 한다.
// 자연수 N을 입력할 때, N의 가장 작은 생성자를 구해내는 프로그램을 작성하라.
// 단, 생성자가 없는 경우에는 0을 출력한다.


#include<iostream>
#include<string>
#include<cmath>

using namespace std;

// 1,3,5,7,9,
// 1+1=2  2+2 =4  3+3 6  4+4=8  5+5 =10  6+6 = 12  7+7=14
int main() {

	int N=0;
	int ten_num = 1;
	int sol = 0;
	int i_tmp = 0;
	string S_N;

	cin >> S_N;


	for (int i = 0; i < S_N.size(); i++) {
		for (int j = 0; j < i; j++) {
			ten_num *= 10;
		}
		N += ((int)S_N[S_N.size() - 1-i] - 48) * ten_num;
		ten_num = 1;
	}

	// 한자리 수일때 생성자가 없는 경우
	if (N == 1 || N == 3 || N == 5 || N == 7 || N == 9) {
		cout << 0 << endl;
		return 0;
	}

	//cout << N << endl;

	for (int i = N - 9 * S_N.size(); i <= N; i++) {
		i_tmp = i;

		// 생성자가 주어진 자연수 값의 자릿수와 같을 때
		if (i / (int)pow(10, S_N.size() - 1) != 0) {
			for (int j = S_N.size()-1; j >= 0; j--) {
				sol += i_tmp / pow(10, j);
				i_tmp = (int)i_tmp % (int)pow(10, j);
				//cout << "같은 자릿수일때: " << pow(10, j) << "  " << sol << endl;
			}
			sol += i;
				if (sol == N) {
					cout << i << endl;
						return 0;
				}
			sol = 0;
		}
		// 생성자가 주어진 자연수 값의 자릿수보다 작을 때
		else if (i / (int)pow(10, S_N.size() - 1) == 0) {
			for (int j = S_N.size() - 2; j >= 0; j--) {
				sol += i_tmp / pow(10, j);
				i_tmp = (int)i_tmp % (int)pow(10, j);
				//cout << "다른 자릿수일때: " << pow(10, j) << sol << endl;
			}
			sol += i;
			if (sol == N) {
				cout << i << endl;
				return 0;
			}
			sol = 0;
		}

	}

	// 해당값의 생성자가 없을경우 0을 출력
	cout << 0 << endl;
	





	return 0;
}