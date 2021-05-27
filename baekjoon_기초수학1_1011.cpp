// 백준 기초수학1_1011번
// Fly me to the Alpha Centauri 문제
// 이전에 이동한 거리 : k		현재 이동한 거리 : k-1  or  k  or  k+1
// x : 출발지점 ,  y : 도착지점
// x, y 의 값이 주어질 때, 이동 횟수의 최솟값을 구하라.
// 단, 처음과 마지막에는 1의 거리를 이동한다.

#include <iostream>

using namespace std;


// 1부터 매개변수 n 까지 수의 합을 간단하게 구함으로써 시간복잡도를 크게 단축시켰습니다.
int sum_of_pre_num(int n) {
	double k = 0;
	
	k = (double)(1 + n) * 0.5 * n;

	return (int)k;
}

int main() {

	int T; 
	int* x;
	int* y;
	int M = 0;
	int sum_of_pre = 0;
	int num_of_now = 0;
	int count = 0;

	

	cin >> T;
	x = new int[T];
	y = new int[T];

	for (int i = 0; i < T; i++) {
		cin >> x[i] >> y[i];
	}

	// 현재의 합은 항상 증가된 수들의 합이다.
	for (int i = 0; i < T; i++) {
		M = y[i] - x[i];
		sum_of_pre = 1;
		num_of_now = 1;
		count = 1;
		while (1) {
			if (M == 1) {
				break;
			} 
			
			// k+1 을 다음 이동거리로 했을 때, 남은 거리가 최소의 합보다 작은 경우
			if (M - (sum_of_pre + num_of_now + 1) > sum_of_pre_num(num_of_now)) {
				num_of_now += 1;
				sum_of_pre += num_of_now;
				++count;
			}
			// k+1 을 다음 이동거리로 했을 때, 남은 거리가 최소의 합과 같은 경우
			else if (M - (sum_of_pre + num_of_now + 1) == sum_of_pre_num(num_of_now)) {
				count = count+num_of_now + 1;
				break;
			}
			// k+1 을 다음 이동거리로 했을 때, 남은 거리가 최소의 합보다 작은 경우
			
			// k를 다음 이동거리로 했을 때, 남은 거리가 최소의 합보다 큰 경우
			else if (M - (sum_of_pre + num_of_now) > sum_of_pre_num(num_of_now - 1)) {
				sum_of_pre += num_of_now;
				++count;
			}
			// k를 다음 이동거리로 했을 때, 남은 거리가 최소의 합과 같은 경우
			else if (M - (sum_of_pre + num_of_now) == sum_of_pre_num(num_of_now - 1)) {
				count = count + num_of_now;
				break;
			}
			// k를 다음 이동거리로 했을 때, 남은 거리가 최소의 합보다 작은 경우
			// k-1을 다음 이동거리로 했을 때, 남은 거리가 최소의 합보다 큰 경우
			else if (M - (sum_of_pre + num_of_now-1) > sum_of_pre_num(num_of_now - 2)) {
				sum_of_pre += num_of_now-1;
				num_of_now -= 1;
				++count;
			}
			// k-1을 다음 이동거리로 했을 때, 남은 거리가 최소의 합과 같은 경우
			else if (M - (sum_of_pre + num_of_now - 1) == sum_of_pre_num(num_of_now - 2)) {
				count = count + num_of_now - 1;
				break;
			}
					
		}
				
			
		
		cout << count << endl;
	}

	delete[] x;
	delete[] y;
	return 0;
}