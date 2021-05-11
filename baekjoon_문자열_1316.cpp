// 백준 문자열파트_1316번문제
// 그룹단어의 개수 출력 문제
// 그룹단어 : ccazzzbb  , kin
// 그룹단어x : aabbccb, acca


#include <iostream>
#include <string>

using namespace std;

int main() {

	int N;
	string* str;
	char c;
	int ox = 0;
	int* sol;
	int count = 0;

	do {
		cin >> N;
	} while (N < 1 || N>100);

	str = new string[N];
	sol = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> str[i];
		sol[i] = 0;
	}


	
	for (int i = 0; i < N; i++) {

		if (str[i].size() < 3)
			continue;
		
		for (int j = 0; j < str[i].size()-2; j++) {
			c = str[i][j];
			for (int k = j+1; k < str[i].size(); k++) {
				
				if (c != str[i][j + 1]) {
					if (c == str[i][k])
						ox++;
				}
				else {
					if (c != str[i][k]) {
						if (k != str[i].size() - 1) {
							for (int x = k+1; x < str[i].size(); x++) {
								if (str[i][x] == c)
									ox++;
							}
						}
					}
				}
				if (ox != 0)
					sol[i] = 1;
					
			}
			ox = 0;

		}

	}
	for (int i = 0; i < N; i++) {
		if (sol[i] == 0)
			count++;
	}

	cout << count;
	



	

	delete[] str;
	delete[] sol;
	return 0;
}