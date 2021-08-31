#include<iostream>
#include<string>
using namespace std;

int main() {

	int N;
	int num = 665;
	int count = 0;
	string str;

	cin >> N;

	while (1) {
		++num;
		str = to_string(num);
		if (str.find("666") != string::npos) {
			++count;
		}

		if (count == N) {
			break;
		}
	}

	cout << num;


	return 0;
}
