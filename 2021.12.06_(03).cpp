// ����_2576��_�����3_Ȧ�� ����

#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[7] = { 0, };
	int sol = 0;
	int min_odd = 100;	// �Է°��� 100���� ���� �ڿ����̹Ƿ� �ּҰ��� 100���� �ʱ�ȭ
	int exist_odd = 0;

	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 1) {
			++exist_odd;
			sol += arr[i];
			min_odd = min(min_odd, arr[i]);
		}
	}

	// �־��� ���� Ȧ���� ������ -1�� ����ϰ� ����
	if (exist_odd == 0) {
		cout << -1;
		return 0;
	}

	cout << sol << '\n';
	cout << min_odd;


	return 0;
}