// 백준 9613번_실버3_GCD 합 문제
// 각 케이스별 모든쌍의 최대공약수의 합을 구하는 문제이다.

// 문제를 계속 틀렸는데 틀린 이유를 몰랐었다.
//	 틀린 이유는 sum_of_gcd의 값의 범위를 생각하지 못해 자료형을 int로해서 범위가 작아 발생하는 오류였다.
//		=>	sum_of_gcd의 자료형을 long long 으로 설정하니 문제를 맞출 수 있었다.

#include<iostream>
#include<vector>

using namespace std;

// 유클리드 호제법 사용
int gcd(int a, int b) {

	int c = a % b;

	while (c > 0) {
		a = b;
		b = c;
		c = a % b;
	}

	return b;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	
	int num;
	long long sum_of_gcd = 0;
	int ele;

	cin >> t;

	vector<vector<int>> vec;

	for (int i = 0; i < t; i++) {
		cin >> num;
		vector<int> v;

		for (int j = 0; j < num; j++) {
			cin >> ele;
			v.push_back(ele);
		}
		vec.push_back(v);
		v.clear();
	}
	
	//cout << vec[0].size() << '\n';
	//cout << vec[1].size() << '\n';


	for (int i = 0; i < t; i++) {
		
		for (int j = 0; j < vec[i].size() - 1; j++) {
			for (int k = j + 1; k < vec[i].size(); k++) {
				sum_of_gcd += gcd(vec[i][j], vec[i][k]);
			}
		}
		cout << sum_of_gcd << '\n';
		sum_of_gcd = 0;
		
		
	}
	


	return 0;
}