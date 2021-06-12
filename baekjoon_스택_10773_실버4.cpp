// 백준 스택_10773번_실버4
// 제로 문제

#include<iostream>
#include<vector>

using namespace std;




int main() {

	vector <int> v;
	int K;
	int num;
	int sum_of_num = 0;

	cin >> K;

	for (int i = 0; i < K; i++) {
		cin >> num;
		if (num != 0) {
			v.push_back(num);
		}
		else {
			v.erase(v.begin() + v.size()-1);
		}
	}

	for (int i = 0; i < v.size(); i++) {
		sum_of_num += v[i];
	}

	cout << sum_of_num;

}