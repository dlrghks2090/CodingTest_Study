#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> str;



int chess(int i, int j) {

	int count = 0;

	// 체스판의 체스가 놓여지는 특징을 해당 좌표위치의 합을 이용하여 해결하였다.

	for (int a = i; a < i + 8; a++) {
		for (int b = j; b < j + 8; b++) {
			if ((a + b) % 2 == 0) {
				if (str[a][b] != 'W')
					++count;
			}
			else {
				if (str[a][b] != 'B')
					++count;
			}

		}
	}

	if (count > 32) {
		count = 64 - count;
	}


	return count;
}

int main() {

	int N, M;
	string s;
	int min = 64;
	int num = 0;

	cin >> N >> M;

	
	for (int i = 0; i < N; i++) {
		cin >> s;
		str.emplace_back(s);
	}

	/*
	cout << "--------  체스판 입력 결과 -----------\n";
	for (int i = 0; i < N; i++) {
		cout << str[i] << '\n';
	}

	cout << str[0][0] << " " << str[0][1] << " " << str[0][2] << '\n';
	
	cout << "-------------- num --------------" << '\n';
	*/
	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			num = chess(i, j);
			
			if (num < min) {
				min = num;
			}
		}
	}
	
	/*
	cout << "----------------------" << '\n';
	cout << "min : ";

	*/
	cout << min;


	return 0;
}