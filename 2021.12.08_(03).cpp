// 백준_2460번_브론즈3_지능형 기차2 문제

#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int in, out;
	int in_p = 0;
	int max_p = 0;

	for (int i = 0; i < 10; i++) {
		cin >> out >> in;
		in_p += in - out;
		max_p = max(max_p, in_p);
	}

	cout << max_p;

	return 0;
 }