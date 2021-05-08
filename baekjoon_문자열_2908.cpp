#include<iostream>
#include<string>


using namespace std;


int main() {

	string a, b;
	int sol = 0;
	int a_ = 0;
	int b_ = 0;


	do {

		cin >> a >> b;

	} while (a == b);

	a_ = ((int)a[2] - 48) * 100 + ((int)a[1] - 48) * 10 + (int)a[0] - 48;

	b_ = ((int)b[2] - 48) * 100 + ((int)b[1] - 48) * 10 + (int)b[0] - 48;

	if (a_ - b_ > 0)
		cout << a_;
	else if (a_ - b_ < 0)
		cout << b_;






	return 0;
}