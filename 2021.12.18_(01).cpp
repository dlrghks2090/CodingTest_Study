// ����_1107��_���5_������ ����
// ���Ʈ���� ������ �ִ� ���ɹ������� Ȯ���Ͽ� Ǯ��´�.
// Ȯ�� ������ 999900 ���� �ؾߵȴٴ� ���� ������ ���̾���. (�̰� ������ ��� Ʋ��)

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int arr[10];


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string N;
	int n;
	int ch = 100;
	int M;
	int M_button[11] = { 0, };
	int sol = 0;
	int count = 0;
	int train = 0;


	cin >> N;
	n = stoi(N);
	cin >> M;

	// ���峭 ��ư �Է�
	for (int i = 0; i < M; i++) {
		cin >> M_button[i];
		arr[M_button[i]] = 1;
	}

	// ��� ���� '+' or '-' ���� �̵��ϴ� Ƚ���� ����
	if (n >= 100) {
		sol = n - 100;
	}
	else {
		sol = 100 - n;
	}

	// 100������ �����ϹǷ� �ִ� 999900������ �˻�
	for (int i = 0; i <= 999900; i++) {
		string s = to_string(i);
		int size = s.size();
		int ox = 0;
		count = 0;

		for (int j = 0; j < size; j++) {
			if (arr[s[j] - '0'] == 1) {
				++ox;
				break;
			}
		}
		if (ox == 0) {
			if (n >= i) {
				count = size + n - i;
			}
			else {
				count = size + i - n;
			}
			sol = min(sol, count);
		}

		s = "";
	}

	cout << sol;





	return 0;
}