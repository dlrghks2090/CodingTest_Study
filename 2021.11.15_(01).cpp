// ����_5565��_�����3_������ ����

#include<iostream>


using namespace std;

int main() {

	int total;
	int arr[9] = { 0, };
	int a = 0;

	cin >> total;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		a += arr[i];
	}

	cout << total - a;

	



	return 0;
}