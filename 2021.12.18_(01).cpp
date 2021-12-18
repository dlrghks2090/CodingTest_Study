// 백준_1107번_골드5_리모컨 문제
// 브루트포스 문제를 최대 가능범위까지 확인하여 풀어냈다.
// 확인 범위를 999900 까지 해야된다는 것이 주의할 점이었다. (이것 때문에 계속 틀림)

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int arr[10];


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string N;
	int n;
	int ch = 100;
	int M;
	int M_button[11] = { 0, };
	int sol = 0;
	int count = 0;
	int train = 0;


	cin >> N;
	n = stoi(N);
	cin >> M;

	// 고장난 버튼 입력
	for (int i = 0; i < M; i++) {
		cin >> M_button[i];
		arr[M_button[i]] = 1;
	}

	// 결과 값에 '+' or '-' 으로 이동하는 횟수를 저장
	if (n >= 100) {
		sol = n - 100;
	}
	else {
		sol = 100 - n;
	}

	// 100번에서 시작하므로 최대 999900번까지 검사
	for (int i = 0; i <= 999900; i++) {
		string s = to_string(i);
		int size = s.size();
		int ox = 0;
		count = 0;

		for (int j = 0; j < size; j++) {
			if (arr[s[j] - '0'] == 1) {
				++ox;
				break;
			}
		}
		if (ox == 0) {
			if (n >= i) {
				count = size + n - i;
			}
			else {
				count = size + i - n;
			}
			sol = min(sol, count);
		}

		s = "";
	}

	cout << sol;





	return 0;
}