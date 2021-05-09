#include <iostream>
#include <string>


using namespace std;


int main() {

	string str;
	string s[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	int count = 0;
	int pos = 0;
	int help = 0;

	cin >> str;

	help = str.size();

	for (int i = 0; i < 8; i++) {

		// pos 를 이용해 찾는 문자열이 존재한다면 다음 루프 때 해당 문자열 다음 인덱스부터 찾도록 만들었다.
		while (str.find(s[i],pos) != std::string::npos) {
			++count;
			// 특정 크로아티아 알파벳을 제외한 문자들을 세는 help변수이다.
			help -= s[i].size();
			pos = str.find(s[i], pos) + s[i].size();
			// "dz=" 와 "z=" 가 중복되어 세어지므로 "z=" 가 더 세어주는경우를 빼주고 help변수를 조정한다.
			if (s[i] == "dz=") {
				--count;
				help += 2;
			}
		}
		pos = 0;

	}
	count = count + help;

	cout << count;

	return 0;
}