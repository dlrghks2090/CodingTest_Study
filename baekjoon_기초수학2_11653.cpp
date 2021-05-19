// 백준 기초수학2_11653번
// 소인수분해
// 정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성해라.

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N;
	int Quotient = 0; //몫
	int i = 2;
	vector<int> v;

	cin >> N;
	Quotient = N;

	while (Quotient >= i) {

		if (Quotient % i == 0) {
			v.push_back(i);
			Quotient = Quotient / i;
		}
		else {
			++i;
		}
		
	}

	for(int j = 0; j < v.size(); j++) {
		cout << v[j] << endl;
	}

	return 0;
}