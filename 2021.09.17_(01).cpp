// 백준_정수론 및 조합론_3036번_실버3_링 문제

// 문제풀이>
// 
//		원의 둘레 = 반지름 * 2 * pi
//
//		해당 문제에서 2 * pi 는 상쇄되므로
//		결국, 각 원의 반지름만을 사용하여 문제를 풀면 된다.
//		기약분수 형태로 출력하는 것은 
//		유클리드 호제법을 사용하여 구한 최대 공약수로 각 분자와 분모 부분을 나누어 표현한다.


#include<iostream>


// 원의 둘레 = 반지름 * 2 * pi

using namespace std;


int main() {

	int N;
	int* arr;
	int x, y;
	int tmp = 10;

	cin >> N;

	arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i < N; i++) {
		if (arr[0] > arr[i]) {
			x = arr[0];
			y = arr[i];
			//유클리드 호제법을 사용한 최대공약수를 구한다.
			while (tmp != 0) {
				tmp = x % y;
				x = y;
				y = tmp;
			}
		}
		else {
			x = arr[i];
			y = arr[0];
			//유클리드 호제법을 사용한 최대공약수를 구한다.
			while (tmp != 0) {
				tmp = x % y;
				x = y;
				y = tmp;
			}
		}
		// 최대공약수는 x값
		cout << arr[0] / x << "/" << arr[i] / x<< '\n';

		tmp = 10;
	}




	delete[] arr;

	return 0;
}