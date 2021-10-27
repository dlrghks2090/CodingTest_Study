// 백준 17103번_실버2_골드바흐 파티션 문제
// 시간초과로 계속 틀렸다.
// -> 에라토스테네스의 체를 사용해 보았다.
#include<iostream>
#include<vector>

using namespace std;


int number = 1000000;
int arr[1000001];


// 에라토스테네스의 체 사용
void prime_number() {

	for (int i = 2; i <= number; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= number; i++) {
		if (arr[i] == 0) {
			continue;
		}

		for (int j = 2 * i; j <= number; j += i) {
			arr[j] = 0;
		}
	}

}

int main() {

	int T;
	int num;

	cin >> T;

	prime_number();

	for (int i = 0; i < T; i++) {
		cin >> num;
		int j = 2;
		int count = 0;

		while (j <= num / 2) {
			if (arr[j] != 0 && arr[num - j] != 0) {
				++count;
			}
			++j;
		}
		cout << count << '\n';
		count = 0;
		j = 2;

	}



	return 0;
}