//우선순위큐를 사용하여 따로 내림차순으로 만들지 않고 정렬

#include<iostream>
#include<queue>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	priority_queue<int> pq;
	int num;
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num == 0) {
			if (pq.size() == 0)
				cout << 0 << '\n';
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
				
		}
		else {
				pq.push(num);
			
		}

	}


	return 0;
}