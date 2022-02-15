// ����_�θ�Ʈ ����_3085��_�ǹ�3_���� ����
// ���� Ž���� ���� for���� ����� �����Ͽ���.

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


char arr[51][51];
int sol = 0;
int N;

void check() {

	int max_count = 1;

	// ���ι��� üũ
	for (int i = 0; i < N; i++) {
		max_count = 1; 
		for (int j = 1; j < N; j++) {
			if (arr[i][j - 1] == arr[i][j]) {
				++max_count;
				sol = max(sol, max_count);
			}
			else {
				max_count = 1;
			}
		}
	}
	// ���ι��� üũ
	for (int i = 0; i < N; i++) {
		max_count = 1;
		for (int j = 1; j < N; j++) {
			if (arr[j-1][i] == arr[j][i]) {
				++max_count;
				sol = max(sol, max_count);
			}
			else {
				max_count = 1;
			}
		}
	}
}


int main() {

	cin >> N;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < N; j++) {
			arr[i][j] = s[j];
		}
	}

	// ���ι������� �ϳ� �ٲ� ����
	for (int i = 0; i < N; i++) {
		for (int j = 1; j < N; j++) {
			if (arr[i][j - 1] != arr[i][j]) {
				swap(arr[i][j - 1], arr[i][j]);
				check();
				swap(arr[i][j - 1], arr[i][j]);
			}
		}
	}
	// ���ι������� �ϳ� �ٲ� ����
	for (int i = 0; i < N; i++) {
		for (int j = 1; j < N; j++) {
			if (arr[j-1][i] != arr[j][i]) {
				swap(arr[j-1][i], arr[j][i]);
				check();
				swap(arr[j-1][i], arr[j][i]);
			}
		}
	}

	cout << sol;





	return 0;
}