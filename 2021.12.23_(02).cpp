// 백준_브루트포스_15652번_실버3_N과M(4) 문제
#include<iostream>

using namespace std;

int N, M;
int sol[9];

void sequence(int count) {

	if (count > M) {
		for (int i = 1; i <= M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	else {
		for (int i = 1; i <= N; i++) {
			if (sol[count - 1] <= i) {
				sol[count] = i;
				sequence(count + 1);
			}
		}		
	}
}

int main() {

	cin >> N >> M;
	sequence(1);

	return 0;
}