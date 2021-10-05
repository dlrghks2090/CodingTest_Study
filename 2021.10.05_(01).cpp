// ����_17299��_���3_����ū�� ����
// �ð����⵵�� ���� �� �ֵ��� for������ stack�� �����Ͽ� Ǭ �����̴�.

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

	// ���ҵ��� ��ū���� ��� -1�� �ʱ�ȭ���� ���´�.
	vector<int> sol(N,-1);

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
		++arr[num];
	}

	// ���ÿ��� Ȯ���� ������ ������ ���ҵ��� ������ ����.
	for (int i = N - 1; i >= 0; i--) {
		
		// ������ ä�����ְ� ���� ������ ���� �ش� ������ �������� �۰ų� ������ ����
		while (!s.empty() && arr[v[i]] >= arr[s.top()]) {
			s.pop();
		}
		// ������ ������� �ʰ� ���� ������ ���� �ش� ������ �������� Ŭ ��� -> �ش� ������ ��ū��
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