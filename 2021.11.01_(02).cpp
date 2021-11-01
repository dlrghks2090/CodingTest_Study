// ���� 11576��_�ǹ�5_ Base Conversion ����

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main() {

	int A, B;
	int m;
	long long sol = 0;	// ū���� ������ ������ longlong �� ����ߴ�.
	int* arr;
	stack<int> st;	// ū�ڸ����� ���� ����ϱ� ���� ������ ���

	cin >> A >> B;
	cin >> m;

	arr = new int[m];

	for (int i = 0; i < m; i++) {
		sol *= A;
		cin >> arr[i];
		sol += arr[i];
	}

	// ���� 0�϶����� ���� ���� �������� sol�� stack�� �־��ִ°� ����Ʈ�̴�.
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