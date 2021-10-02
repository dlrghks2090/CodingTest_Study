// 백준_자료구조1_17413번_실버3_단어 뒤집기2 문제
// 여러가지 푸는 방법이 있지만 나는 string의 특성들을 사용하여 문제를 풀었다.

#include<iostream>
#include<string>
using namespace std;


// 문자열 안의 단어들을 뒤집기 위한 장치
void reverse(string& str, int start, int end, int count) {
	char tmp;
	int k = 0;
	for (int i = start; i < start + count / 2; i++) {
		tmp = str[i];
		str[i] = str[end - k];
		str[end - k] = tmp;
		++k;
		tmp = NULL;
	}

}

int main() {

	string str;
	int tag = 0; // 태그 체크
	
	int count = 0;
	int start;
	int end;


	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {

		// 괄호를 구분하기 위한 장치로 tag를 사용하였다.
		if (tag == 0) {
			if (str[i] == '<') {
				if (count != 0) {
					end = i - 1;
					// 괄호가 시작하기전까지 문자열이 있었다면 뒤집는다.
					reverse(str, start, end, count);
					count = 0;
				}
				tag = 1;
			}
			// 공백이 나올때 그전까지의 문자열이 존재했다면 뒤집는다.
			else if (str[i] == ' ') {
				end = i - 1;
				reverse(str, start, end, count);
				count = 0;
			}
			else {
				if (count == 0) {
					start = i;
				}
				++count;
				// 루프문의 마지막에 count !=0 이면 문자열을 뒤집는다.
				if (i == str.size() - 1) {
					if (count != 0) {
						end = i;
						reverse(str, start, end, count);
					}
				}
			}

		}
		else {
			if (str[i] == '>') {
				tag = 0;
			}
		}
	}

	cout << str;



	return 0;
}