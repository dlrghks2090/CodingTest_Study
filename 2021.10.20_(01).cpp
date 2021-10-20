// 백준_10824번_브론즈3_네 수 문제
// 모든 경우의 수를 생각해야 하는 중요성을 다시한번 확인할 수 있는 문제였다.

#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {

	int A, B, C, D;
	string a, b, c, d;
	stack<char> ab;
	stack<char> cd;
	stack<int> sol;
	int tmp = 0;
	int sum = 0;

	cin >> A >> B >> C >> D;

	a = to_string(A);
	b = to_string(B);
	c = to_string(C);
	d = to_string(D);

	a.append(b);
	c.append(d);

	for (int i = 0; i < a.size(); i++) {
		ab.push(a[i]);
	}

	for (int i = 0; i < c.size(); i++) {
		cd.push(c[i]);
	}

	// ab.empty() && cd.empty() 이면 while문 종료
	while (!ab.empty() || !cd.empty()) {
		if (!ab.empty() && !cd.empty()) {
			sum = (ab.top() - '0') + (cd.top() - '0') + tmp;
			if (sum >= 10) {
				tmp = 1;
				sum = sum - 10;
			}
			else {
				tmp = 0;
			}

			sol.push(sum);

			ab.pop();
			cd.pop();
			sum = 0;
		}
		else if (ab.empty()) {
			sum = (cd.top() - '0') + tmp;
			if (sum >= 10) {
				tmp = 1;
				sum = sum - 10;
			}
			else {
				tmp = 0;
			}

			sol.push(sum);
			cd.pop();
			sum = 0;
		}
		else if (cd.empty()) {
			sum = (ab.top() - '0') + tmp;
			if (sum >= 10) {
				tmp = 1;
				sum = sum - 10;
			}
			else {
				tmp = 0;
			}

			sol.push(sum);
			ab.pop();
			sum = 0;
		}

	}

	// 이 조건을 빼먹어서 5번의 실패를 했다. 항상 모든 경우의 수를 생각 할 수 있어야한다.
	if (tmp == 1) {
		sol.push(1);
	}

	while (!sol.empty()) {
		cout << sol.top();
		sol.pop();
	}



	return 0;
}