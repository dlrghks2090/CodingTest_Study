// ����_2752��_�����4_�������� ����

#include<iostream>
#include<algorithm>

using namespace std;

int arr[3];

int main() {

	cin >> arr[0] >> arr[1] >> arr[2];

	sort(arr, arr + 3);

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}


	return 0;
}