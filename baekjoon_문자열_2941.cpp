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

		// pos �� �̿��� ã�� ���ڿ��� �����Ѵٸ� ���� ���� �� �ش� ���ڿ� ���� �ε������� ã���� �������.
		while (str.find(s[i],pos) != std::string::npos) {
			++count;
			// Ư�� ũ�ξ�Ƽ�� ���ĺ��� ������ ���ڵ��� ���� help�����̴�.
			help -= s[i].size();
			pos = str.find(s[i], pos) + s[i].size();
			// "dz=" �� "z=" �� �ߺ��Ǿ� �������Ƿ� "z=" �� �� �����ִ°�츦 ���ְ� help������ �����Ѵ�.
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