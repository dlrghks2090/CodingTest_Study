// ���� 1463��_DP_�ǹ�3_1�� ����� ����

// arr �� main()�Լ����� ���������� ���������� �޸��� ���Ѷ����� ��� ������ ������.
// �޸��� ����� ������� data������ �ڷḦ �����ϴ� ���������� ��������(static)�� �������.
// Dynamic Programming(�������α׷���)������ bottom-top �� ���ٹ������ ������ Ǯ����.
#include<iostream>
#include<algorithm>

using namespace std;

int N;
int arr[1000001];

int main() {

	

	cin >> N;

	for (int i = 2; i <= N; i++) {
		arr[i] = arr[i - 1] + 1;	// -1�� ���
		if (i % 2 == 0) {
			arr[i] = min(arr[i], arr[i/2]+1);		// -1�� ���� 2�� ������� �� �ּڰ�
		}
		if (i % 3 == 0) {
			arr[i] = min(arr[i], arr[i / 3] + 1);		// (-1�� ��� or 2�� ���� ���)�� 3���� ������� �� �ּڰ�
		}
	}

	cout << arr[N];


	return 0;
}