// 백준_브루트포스_3085번_실버3_사탕 게임 문제

#include<iostream>
#include<string>

using namespace std;

char arr[51][51] = { 0, };

int check(int N) {
	int num = 1;
	int tmp;

	for (int i = 0; i < N; i++) {
		tmp = 1;
		for (int j = 1; j < N; j++) {
			if (arr[i][j] == arr[i][j - 1]) {
				++tmp;
				num = max(num, tmp);
			}
			else
				tmp = 1;
		}
	}

	for (int i = 0; i < N; i++) {
		tmp = 1;
		for (int j = 1; j < N; j++) {
			if (arr[j][i] == arr[j - 1][i]) {
				++tmp;
				num = max(num, tmp);
			}
			else
				tmp = 1;
		}
	}

	return num;
}

int main() {

	int N;
	int sol = 0;

	cin >> N;


	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < N; j++) {
			arr[i][j] = str[j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 1; j < N; ++j) {
			swap(arr[i][j - 1], arr[i][j]);
			sol = max(sol, check(N));
			swap(arr[i][j - 1], arr[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 1; j < N; ++j) {
			swap(arr[j][i], arr[j-1][i]);
			sol = max(sol, check(N));
			swap(arr[j][i], arr[j-1][i]);
		}
	}

	cout << sol;

	return 0;
}