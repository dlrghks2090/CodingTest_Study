#include<iostream>
#include<deque>

using namespace std;

int main() {

	int N;
	deque <int> dq;
	int count = 0;
	
	cin >> N;


	for (int i = 1; i <= N; i++) {
		if (N == 1) {
			dq.push_back(N);
			break;
		}
		if (i % 2 == 0) {
			dq.push_back(i);
		}
	}
	count = N;

	while (1) {
		++count;
		if (dq.size() == 1) {
			break;
		}
		else if (count % 2 == 0) {
			dq.push_back(dq.front());
			dq.pop_front();
		}
		else{
			dq.pop_front();
		}
	}
	cout << dq.front();


	return 0;
}