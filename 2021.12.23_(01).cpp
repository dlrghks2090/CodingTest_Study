// ����_���Ʈ����_15651��_�ǹ�3_N�� M(3) ����

#include<iostream>

using namespace std;

int N, M;
int sol[7];

void sequence(int count) {

	if (count == M) {
		for (int i = 0; i < M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	else {
		for (int i = 1; i <= N; i++) {
			sol[count] = i;
			sequence(count + 1);
		}
	}


}

int main() {

	cin >> N >> M;

	sequence(0);


	return 0;
}