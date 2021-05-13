// 백준 기초수학1_1193번
// 분수찾기 문제
// 1/1 -> 1/2 -> 2/1 -> 3/1 -> 2/2 -> 1/3 -> 1/4 -> ...... 를 순서대로 1번 2번 3번 .... 분수라고 한다.
// X가 주어질때, X 번째 분수를 구하는 프로그램을 작성하라.


#include <iostream>


using namespace std;



int main() {

	int X;
	int x_ = 0;
	int Num = 1;

	cin >> X;

	x_ = X;

	
	

	while (Num <= x_) {
		x_ -= Num;
		Num++;
	}

	if (x_ == 0) {
		if ((Num - 1) % 2 == 0)
			cout << Num - 1 << "/" << 1;
		else
			cout << 1 << "/" << Num - 1;
	}
	else {
		if (Num % 2 == 0)
			cout << x_ << "/" << Num - x_ + 1;
		else
			cout << Num - x_ + 1 << "/" << x_;
		
	}


	return 0;
}
