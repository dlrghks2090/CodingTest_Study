// 백준_DFS,BFS_1260번_실버2_DFS와 BFS 문제
// 그래프 탐색(DFS와 BFS) 을 구현하는 기본 문제였다.
// DFS : 재귀를 사용해 구현
// BFS : 큐를 사용해 구현


#include<iostream>
#include<queue>
#include<stack>

using namespace std;

int map[1001][1001];
int visit[1001];
int N;
queue<int> q;
stack<int> st;


void dfs(int v) {
	
	cout << v << " ";
	visit[v] = 1;
	for (int i = 1; i <= N; i++) {
		if (map[v][i] == 1 && visit[i] == 0) {
			dfs(i);
		}
	}
}

void bfs(int start) {
	
	cout << start << " ";
	q.push(start);

	while (!q.empty()) {
		int node = q.front();
		q.pop();
		for (int i = 1; i <= N; i++) {
			if (map[node][i] == 1 && visit[i] == 0) {
				visit[node] = 1;
				visit[i]=1;
				cout << i << " ";
				q.push(i);
			}
		}
		//cout << '\n';
	}

}


int main() {

	int M, V;
	

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = map[b][a] = 1;
	}


	dfs(V);		// 깊이 우선 탐색
	cout << '\n';
	//cout << "---------------" << '\n';
	fill_n(visit, N + 1, 0);		// 방문 여부를 다시 0으로 초기화

	bfs(V);		// 너비 우선 탐색

	return 0;
}