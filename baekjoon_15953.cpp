#include <iostream>
#include <vector>

using namespace std;


int kakaoF2017(int n) {

	if (n == 1)
		return 5000000;
	else if (1 < n && n < 4)
		return 3000000;
	else if (3 < n && n < 7)
		return 2000000;
	else if (6 < n && n < 11)
		return 500000;
	else if (10 < n && n < 16)
		return 300000;
	else if (15 < n && n < 22)
		return 100000;
	else
		return 0;

}

int kakaoF2018(int n) {

	if (n == 1)
		return 5120000;
	else if (1 < n && n < 4)
		return 2560000;
	else if (3 < n && n < 8)
		return 1280000;
	else if (7 < n && n < 16)
		return 640000;
	else if (15 < n && n < 32)
		return 320000;
	else
		return 0;
}


int main() {
	
	int a;
	int b;

	vector <int>total;
	int T;

	do {
		cin >> T;
	} while (T<1 || T>1000);

	for (int i = 0; i < T; i++) {
		do {
			cin >> a >> b;
		} while (a,b<0);
		if (a > 100 || a==0)
			a = 0;
		if (b > 64 || b==0)
			b = 0;
		total.push_back(kakaoF2017(a) + kakaoF2018(b));
	}

	for (int i = 0; i < total.size(); i++) {
		cout << total[i] << endl;
	}

	return 0;
}