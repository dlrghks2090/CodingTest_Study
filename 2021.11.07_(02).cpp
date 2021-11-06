#include<iostream>

using namespace std;

int main() {

	int N, M;
	int sum = 0;
	int count = 0;
	int min = 0;

	cin >> M;
	cin >> N;

	for (int i = 1; i * i <= N; i++) {
		if (i * i >= M && i * i <= N) {
			++count;
			if (count == 1) {
				min = i * i;
			}
			sum += i * i;
			
		}
	}

	if (min == 0) {
		cout << -1;
	}
	else {
		cout << sum << '\n' << min;
	}



	return 0;
}