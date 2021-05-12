// 백준 기본수학1파트_1712번문제
// 손익분기점 문제
// A : 노트북 제조회사의 고정비용,   B : 노트북 한대에 들어가는 가변비용,   C : 노트북 한대의 판매 가격
// 손익분기점 : 최초로 총 수입이 총 비용보다 많아져 이익이 발생하는 지점
// A,B,C 가 주어질 때 손익분기점을 구하라.


#include <iostream>


using namespace std;
int main() {
	long long int A, B, C;
	long long int num = 0;

	cin >> A >> B >> C;

	if (B >= C) {
		cout << -1;
		return 0;
	}

	while (A+B*num>=C*num) {
		if (A + B * (num + 100) >= C * (num + 100)) {
			num = num + 100;
			continue;
		}
		++num;
	}
	cout << num;

	return 0;
}