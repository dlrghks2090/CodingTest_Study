// deque�� ����Ͽ� �̵� Ƚ���� ���� ��������.
// deque�� ����� ���� int�� ������ �����س��� ������� �ʾ� ��꿡 ������ �������.
// ����� �������� �� ���� �����ص���.

#include<iostream>
#include<deque>
#include<vector>

using namespace std;

int main() {

	deque<int> dq;
	vector<int> que;
	int N, M;
	int num;
	int count = 0;
	int sol = 0;
	int dq_size = 0;


	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}

	dq_size = dq.size();
	for (int i = 0; i < M; i++) {
		cin >> num;
		
		
		for (int j = 1; j <= dq_size; j++) {
			if (dq.front() == num) {
				dq.pop_front();
				break;
			}
			else {
				dq.push_back(dq.front());
				dq.pop_front();
				++count;
			}
		}

		if (count > dq_size / 2) {
			sol += dq_size - count;
			//cout << "count = " << count << "dq_size - count = " << dq_size - count << '\n';
			//cout << i + 1 << "��° ���ϴ� ��: " << dq_size - count << '\n';
		}
		else {
			sol += count;
			//cout << "count = " << count << "dq_size - count = " << dq_size - count << '\n';
			//cout << i + 1 << "��° ���ϴ� ��: " << count << '\n';
		}
		dq_size = dq.size();
		count = 0;
	}
	//cout << '\n';
	cout << sol;



	return 0;
}