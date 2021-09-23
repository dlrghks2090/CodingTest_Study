// 백준_정수론 및 조합론_1676번_실버4_팩토리얼 0의 개수 문제
// N! 에서 뒤에서 부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.
// => 결국 N!에 10이 몇번 곱해져 있냐를 뭍는 문제이다.
//		=> 5가 몇번 곱해져있는지에 판가름 나는데 N<=300 이므로 125, 25, 5 가 판별하는 수이다.
//		=> 1부터 N까지 위의 판별수가 인수로 있는 개수를 구하면 되는 문제이다.

#include<iostream>

using namespace std;

int main() {

	int N;
	int count = 0;

	cin >> N;

	for (int i = 0; i <= N; i++) {
		if (i != 0) {
			if (i % 125 == 0) {
				count += 3;
			}
			else if (i % 25 == 0) {
				count += 2;
			}
			else if (i % 5 == 0) {
				count += 1;
			}
		}
	}

	cout << count;



	return 0;
}