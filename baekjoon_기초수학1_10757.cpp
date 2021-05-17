// 백준 기초수학1_10757번
// 큰 수 A+B 문제
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성해라.

// 큰 수를 입력받을때 다른 방식은 한계가 있다고 생각하여 string을 이용하여 계산하는 방식을 사용했습니다.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	string A;
	string B;
	int max_size = 0;
	int min_size = 0;
	int next_sum = 0;
	vector <int> v;
	int num = 0;
	int sum_of_num = 0;

	


	cin >> A >> B;

	if (A.size() > B.size()) {
		max_size = A.size();
		min_size = B.size();
	}
	else {
		max_size = B.size();
		min_size = A.size();
	}
		
	if (max_size == A.size()) {
		
		for (int i = max_size - 1; i > -1; i--) {

			if (min_size - num - 1 > -1) {

				sum_of_num = (int)A[i]-48 + (int)B[min_size - num - 1]-48 + next_sum;
				next_sum = sum_of_num / 10;
				sum_of_num = sum_of_num % 10;
				v.push_back(sum_of_num);
				++num;
			}
			else {
				sum_of_num = (int)A[i]-48 + next_sum;
				next_sum = sum_of_num / 10;
				sum_of_num = sum_of_num % 10;
				v.push_back(sum_of_num);
			}

		}
		if (next_sum != 0)
			v.push_back(next_sum);
	}
	else if(max_size == B.size()) {
		for (int i = max_size - 1; i > -1; i--) {

			if (min_size - num - 1 > -1) {

				sum_of_num = (int)B[i]-48 + (int)A[min_size - num - 1]-48 + next_sum;
				next_sum = sum_of_num / 10;
				sum_of_num = sum_of_num % 10;
				v.push_back(sum_of_num);
				++num;
			}
			else {
				sum_of_num = (int)B[i]-48 + next_sum;
				next_sum = sum_of_num / 10;
				sum_of_num = sum_of_num % 10;
				v.push_back(sum_of_num);
			}

		}
		if (next_sum != 0)
			v.push_back(next_sum);
	}



	for (int i = v.size()-1; i > -1 ; i--) {
		cout << v[i];
	}





	return 0;
}