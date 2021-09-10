#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {

	int N;
	int total = 0;
	int aver = 0;
	int* arr;
	int num;
	int most_count = 0;
	int M_C = 0;
	int temp = 0;
	bool isSecond = false;
	vector <int> v(8001,0);		// 0   1~4000(음수)		4001~8000(양수)
								// 8001개의 원소를 0으로 초기화시켰다.


	cin >> N;
	arr = new int[N];


	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
		total += num;
	}

	// 오름차순 정렬
	sort(arr, arr + N);


	/*
	cout << "---------정렬된 배열-----------" << '\n';

	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}
	*/

	// 각 원소의 출연빈도를 기록
	for (int i = 0; i < N; i++) {
		temp = (arr[i] <= 0) ? abs(arr[i]) : arr[i] + 4000;
		++v[temp];
		if (v[temp] > most_count) {
			most_count = v[temp];
		}
	}

	// 최빈값 구하기, 최빈값이 여러개일 때, 두번째로 작은수를 기억
	for (int i = -4000; i < 4001; i++) {
		temp = (i <= 0) ? abs(i) : i + 4000;
		if (v[temp] == most_count) {
			M_C = i;
			if (isSecond) {
				break;
			}
			isSecond = true;
		}
	}


	/*
	cout << "---------정답----------" << '\n';
	*/



	cout << round((double)total / N) << '\n';
	cout << arr[N / 2] << '\n';
	cout << M_C << '\n';
	cout << arr[N - 1] - arr[0];

	delete[] arr;
	return 0;
}