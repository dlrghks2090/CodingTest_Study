// ����_2587��_�����2_��ǥ��2 ����

#include<iostream>
#include<algorithm>

using namespace std;

int arr[5];

int main() {

	int mid = 0;
	int aver = 0;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		aver += arr[i];
	}

	sort(arr, arr + 5);

	mid = arr[2];
	aver = aver / 5;

	cout << aver << '\n';
	cout << mid;

	return 0;
}