// ����_DP_9095��_�ǹ�3_1,2,3 ���ϱ� ����
// ��Ģ�� ã�°� �ٽ��� DP�����̴�.
// �ش� ������ ���� bottom - top ������� Ǯ��´�.
// ��ȭ���� ã�Ƴ��� ��������. 
// arr[n] = arr[n-1]+arr[n-2]+arr[n-3]


// 4�� ���ε��,
// 3�� ��쿡 1�� �÷����� ���, 2�� ��쿡 2�� �÷����Ѱ��, 1�� ��쿡 3�� �÷����� �����̴�.

#include<iostream>

using namespace std;

int arr[11];

int main() {

	int T; 
	int n;

	cin >> T;

	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	//arr[4] = 7;
	//arr[5] = 13;

	for (int i = 4; i < 11; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}

	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << arr[n] << '\n';
	}


	return 0;
}