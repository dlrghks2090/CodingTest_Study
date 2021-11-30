// 백준_9325번_브론즈3_얼마? 문제

#include<iostream>
#include<vector>

using namespace std;


struct car {
	int s;
	int n;
	int q[1000] = { 0, };
	int p[1000] = { 0, };

};

int main() {

	int T;
	int sol = 0;
	
	vector<car> v;

	cin >> T;

	for (int i = 0; i < T; i++) {
		car c;
		cin >> c.s;
		cin >> c.n;
		if (c.n == 0) {
			v.push_back(c);
		}
		else {
			for (int j = 0; j < c.n; j++) {
				cin >> c.q[j] >> c.p[j];
			}
			v.push_back(c);
		}
	}

	for (int i = 0; i < v.size(); i++) {
		sol += v[i].s;
		for (int j = 0; j < v[i].n; j++) {
			sol += v[i].q[j] * v[i].p[j];
		}
		cout << sol << '\n';
		sol = 0;
	}



	return 0;
}