#include<iostream>
#include<vector>

using namespace std;


// 수가 소수인지 판별하는 함수
bool sosu(int n) {

	int count = 0;

	for (int i = 1; i * i <= n; i = i+2) {
		if (n % i == 0) {
			++count;
		}
	}

	if (count == 1) {
		return true;
	}
	else {
		return false;
	}


}


int main() {

	vector<int> v;
	int num;
	int ox = 0;

	while (1) {
		cin >> num;
		if (num == 0) {
			break;
		}
		else {
			v.push_back(num);
		}
	}

	for (int i = 0; i < v.size(); i++) {
		// 두 홀수인 소수의 합이 해당 짝수가 될 수 있는지를 찾기위한 for문
		for (int j = 3; j <= v[i] / 2; j = j + 2) {
			// 두 수 모두 소수이면 출력     (해당 짝수 = a + b 라고 할때, 제일 먼저 참인 수들이 b-a가 최대인 홀수 소수이다.)
			if (sosu(j) && sosu(v[i] - j)) {
				++ox;
				cout << v[i] << " = " << j << " + " << v[i] - j << '\n';
				break;
			}
		}
		if (ox == 0) {
			cout << "Goldbach's conjecture is wrong." << '\n';
		}
		ox = 0;
	}


	return 0;
}