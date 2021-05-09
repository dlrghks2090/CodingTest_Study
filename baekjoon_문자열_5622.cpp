#include <iostream>
#include <string>


using namespace std;

int Time(char a) {


	switch (a) {
	case 'A':
	case 'B':
	case 'C':
		return 3;
	case 'D':
	case 'E':
	case 'F':
		return 4;
	case 'G':
	case 'H':
	case 'I':
		return 5;
	case 'J':
	case 'K':
	case 'L':
		return 6;
	case 'M':
	case 'N':
	case 'O':
		return 7;
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
		return 8;
	case 'T':
	case 'U':
	case 'V':
		return 9;
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
		return 10;


	}


}


int main() {

	string str;
	int time = 0;

	do {
		cin >> str;
	} while (str.size() < 2 || str.size() > 15);

	for (int i = 0; i < str.size(); i++) {

		time += Time(str[i]);

	}
	
	cout << time;

	return 0;
}