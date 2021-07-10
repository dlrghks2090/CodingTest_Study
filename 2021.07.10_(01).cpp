#include<iostream>
#include<vector>
#include<string>
#include<queue>

using namespace std;

int main() {

	//시간단축을 위해
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int N;
	string str;
	int num;
	queue<int> que;
	vector<int> sol;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push") {
			cin >> num;
			que.push(num);
		}
		else if (str == "pop") {
			if (que.size() != 0) {
				sol.push_back(que.front());
				que.pop();
			}
			else {
				sol.push_back(-1);
			}
			
		}
		else if (str == "size") {
			sol.push_back(que.size());
		}
		else if (str == "empty") {
			if (que.empty()) {
				sol.push_back(1);
			}
			else {
				sol.push_back(0);
			}
		}
		else if (str == "front") {
			if (que.size() == 0) {
				sol.push_back(-1);
			}
			else {
				sol.push_back(que.front());
			}
		}
		else if (str == "back") {
			if (que.size() == 0) {
				sol.push_back(-1);
			}
			else {
				sol.push_back(que.back());
			}
		}
	}

	for (int i = 0; i < sol.size(); i++) {
		cout << sol[i] << '\n';
	}


	return 0;
}