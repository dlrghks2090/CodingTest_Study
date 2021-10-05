// 백준_17299번_골드3_오등큰수 문제
// 시간복잡도를 줄일 수 있도록 for루프에 stack을 결합하여 푼 문제이다.

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int arr[1000001] = { 0 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N;
	int num;
	vector<int> v;
	stack<int> s;
	

	cin >> N;

	// 원소들의 오큰수를 모두 -1로 초기화시켜 놓는다.
	vector<int> sol(N,-1);

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
		++arr[num];
	}

	// 스택에는 확인할 원소의 오른쪽 원소들의 개수가 들어간다.
	for (int i = N - 1; i >= 0; i--) {
		
		// 스택이 채워져있고 스택 맨위의 수가 해당 원소의 개수보다 작거나 같으면 삭제
		while (!s.empty() && arr[v[i]] >= arr[s.top()]) {
			s.pop();
		}
		// 스택이 비어있지 않고 스택 맨위의 수가 해당 원소의 개수보다 클 경우 -> 해당 원소의 오큰수
		if (!s.empty() && arr[v[i]] < arr[s.top()]) {
			sol[i] = s.top();
		}
		s.push(v[i]);
	}

	for (int i = 0; i < N; i++) {
		cout << sol[i] << " ";
	}



	return 0;
}