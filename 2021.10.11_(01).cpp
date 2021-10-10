#include<iostream>
#include<string>

using namespace std;

int main() {

	string s;
	string alpa = "abcdefghijklmnopqrstuvwxyz";
	int arr[27] = { 0 };

	cin >> s;


	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < alpa.size(); j++) {
			if (alpa[j] == s[i]) {
				++arr[j];
			}
		}

	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}


	return 0;
}