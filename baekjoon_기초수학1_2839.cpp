// 백준 기초 수학1_2839번
// 설탕 배달 문제
// 5kg 설탕봉지, 3kg 설탕봉지가 존재한다.
// N kg을 배달할때, 최대한 적은 봉지를 가져갈 수 있는 프로그램을 완성해라
// 단, 정확히 N kg 을 만들 수 없다면 -1을 출력한다.


// 5로 나눴을 때, 1이 남거나 4가 남으면 5kg을 한번 빼고 3kg으로 채운다.
// 5로 나눴을 때, 2가 남는다면 그때 5로 나눈 몫이 2 이상이면 5kg을 두번 빼고 3kg으로 채운다.
// 5로 나눴을 때, 3이 남는다면 3kg으로 채워준다.

#include <iostream>


using namespace std;

int main() {

	int N;
	int num_of_five = 0;
	int num_of_three = 0;
	int count = 0;

	do {
		cin >> N;
	} while (N < 3 || N>5000);

	if (N % 5 == 0) {
		num_of_five = N / 5;
	}
	else if (N % 5 == 1 || N % 5 == 4) {
		if (N / 5 > 0) {
			num_of_five = N / 5 - 1;
			num_of_three = (N % 5 + 5) / 3;
		}
		else
			count = -1;
	}
	else if (N % 5 == 2) {
		if (N / 5 >= 2) {
			num_of_five = N / 5 - 2;
			num_of_three = (N % 5 + 10) / 3;
		}
		else
			count = -1;

	}
	else if (N % 5 == 3) {
		num_of_five = N / 5;
		num_of_three = (N % 5) / 3;
	}
	
	count = count + num_of_five + num_of_three;

	cout << count;


	return 0;
}