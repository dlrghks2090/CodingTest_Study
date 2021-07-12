// 큐와 우선순위 큐를 사용한 풀이
// pair의 개념을 익힌 문제였다.

#include<iostream>
#include<queue>
#include<vector>

using namespace std;


int main() {

	int T;

	cin >> T;

	for (int testcase = 0; testcase < T; testcase++) {
		queue <pair<int, int>> que;
		priority_queue<int> p_que;

		int N, M;
		int num;
		int idx;
		int val;
		int count;

		cin >> N >> M;
		for (int i = 0; i < N; i++) {
			cin >> num;
			que.push({ i, num });
			p_que.push(num);
		}
		count = 0;
		while (!que.empty()) {
			idx = que.front().first;
			val = que.front().second;
			que.pop();
			if (p_que.top() == val) {
				p_que.pop();
				++count;
				if (idx == M) {
					cout << count << '\n';
					break;
				}
			}
			else {
				que.push({ idx,val });
			}
		}

	}
	
	


	return 0;
}