// ���� 11726��_DP_�ǹ�3_2*n Ÿ�ϸ� ����
// bottom-top ����� ������ ��ȭ���� ã�Ƴ��� ������ Ǯ����.
// ������ ��� ���а� ���Դµ� arr�� ����Ǵ°��� ������ �ʹ� Ŀ���� �߻��� ��������.
// �ذ��� : arr�� ����Ǵ¼��� 10007�� �̸� ������ ����� ���־� �Է��ߴ�.

#include<iostream>

using namespace std;

int arr[1001];

int main() {

	int n;

	cin >> n;

	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i <= n; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2])%10007;
	}

	cout << arr[n]%10007;

	return 0;
}