// ����_���Ʈ����_15652��_�ǹ�3_N��M(4) ����
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