// 백준 11576번_실버5_ Base Conversion 문제

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main() {

	int A, B;
	int m;
	long long sol = 0;	// 큰수의 지장이 없도록 longlong 을 사용했다.
	int* arr;
	stack<int> st;	// 큰자리수를 먼저 출력하기 위해 스택을 사용

	cin >> A >> B;
	cin >> m;

	arr = new int[m];

	for (int i = 0; i < m; i++) {
		sol *= A;
		cin >> arr[i];
		sol += arr[i];
	}

	// 몫이 0일때까지 해준 다음 마지막의 sol을 stack에 넣어주는게 포인트이다.
	while (sol / B != 0) {
		st.push(sol % B);
		sol = sol / B;
	}
	st.push(sol);

	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}

	delete[] arr;

	return 0;
}