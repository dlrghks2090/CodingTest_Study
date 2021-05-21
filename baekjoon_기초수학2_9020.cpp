// 백준 기초수학2_9020번
// 골드바흐의 추측 문제
// 골드바흐의 추측 : 2보다 큰 짝수는 두 소수의 합으로 나타낼 수 있다. 이러한 수를 골드바흐 수라고 한다.
// 골드바흐 파티션 : 짝수를 두 소수의 합으로 나타내는 표현
// ex > 4 = 2+2, 6 = 3+3, 8 = 3+5,.....
// 2보다 큰 짝수 n이 주어졌을 때, n의 골드바흐 파티션을 출력하는 프로그램을 작성하라.
// 만약 가능한 n의 골드바흐 파티션이 여러 가지인 경우에는 두 소수의 차이가 가장 작은 것을 출력한다.

#include<iostream>
#include<vector>

#define MAX 10000
using namespace std;

int sosu(int n){

	int count = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			++count;
		if (count > 2)
			break;
	}
	if (count == 2)
		return 1;
	else
		return 0;
}


int main() {

	int T;
	int* n;
	int a = 0;
	int b = 0;
	int ox = 0;
	vector<int> v;
	int idx = 0;

	cin >> T;
	n = new int[T];
	
	for (int i = 0; i < T; i++) {
		cin >> n[i];
	}
	for (int i = 2; i <= 10000; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				++ox;
		
		}
		if(ox == 2)
			v.push_back(i);
		ox = 0;
	}
	

	for (int i = 0; i < T; i++) {

		while (v[idx] <= n[i] / 2) {
			for (int aa = 0; aa < v.size(); aa++) {
				if (v[idx] + v[aa] > n[i])
					break;
				if (n[i] - v[idx] == v[aa]) {
					a = v[idx];
					b = v[aa];
					break;
				}
				
			}
			++idx;
		}

		cout << a << " " << b << endl;
		a = 0;
		b = 0;
		idx = 0;
	
	}

	return 0;
}