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
	vector <int> v(8001,0);		// 0   1~4000(����)		4001~8000(���)
								// 8001���� ���Ҹ� 0���� �ʱ�ȭ���״�.


	cin >> N;
	arr = new int[N];


	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
		total += num;
	}

	// �������� ����
	sort(arr, arr + N);


	/*
	cout << "---------���ĵ� �迭-----------" << '\n';

	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}
	*/

	// �� ������ �⿬�󵵸� ���
	for (int i = 0; i < N; i++) {
		temp = (arr[i] <= 0) ? abs(arr[i]) : arr[i] + 4000;
		++v[temp];
		if (v[temp] > most_count) {
			most_count = v[temp];
		}
	}

	// �ֺ� ���ϱ�, �ֺ��� �������� ��, �ι�°�� �������� ���
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
	cout << "---------����----------" << '\n';
	*/



	cout << round((double)total / N) << '\n';
	cout << arr[N / 2] << '\n';
	cout << M_C << '\n';
	cout << arr[N - 1] - arr[0];

	delete[] arr;
	return 0;
}