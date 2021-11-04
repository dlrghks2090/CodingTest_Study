// ����_DP_11727��_�ǹ�3_2*n Ÿ�ϸ� 2 ����
// 2*nŸ�ϸ� ������ ��ü������ Ǯ�̹���� ����
// But, arr[n] �� ���Ҷ�, arr[n-2] �κ��� arr[n-2]*2 �� �ٲ��.
// ������ 1*2 Ÿ���� ���� ����ڸ��� 2*2 Ÿ���� �� �� �ֱ� ������ �� ��츸 ä���ָ� ��� ��츦 �� �� �ִ�.

#include<iostream>

using namespace std;

int arr[1001];

int main() {

	int n;
	
	cin >> n;

	arr[1] = 1;
	arr[2] = 3;

	for (int i = 3; i <= n; i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2]*2)%10007;
	}

	cout << arr[n];

	return 0;
}