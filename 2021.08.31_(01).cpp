#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> str;



int chess(int i, int j) {

	int count = 0;

	// ü������ ü���� �������� Ư¡�� �ش� ��ǥ��ġ�� ���� �̿��Ͽ� �ذ��Ͽ���.

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
	cout << "--------  ü���� �Է� ��� -----------\n";
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