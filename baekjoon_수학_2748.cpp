// ���� ����_2748��
// �Ǻ���ġ �� 2 ����

#include<iostream>


using namespace std;


int main() {

	int n;
	// �Ǻ���ġ���� ������ �� ���� �ʿ��ϹǷ� arr[2]������ �޸� ���� �ٿ���.
	unsigned long long int arr[2] = { 0, };  // ���� Ŀ�� ���� ����� int�� unsigned long long���� ����
	
	cin >> n;

	for (int i = 0; i <= n; i++) {
		if (i == 0)
			arr[0] = 0;
		if (i == 1)
			arr[1] = 1;

		if (i % 2 == 0)
			arr[0] = arr[0] + arr[1];
		else if (i % 2 == 1)
			arr[1] = arr[0] + arr[1];
			
	}
	if (n % 2 == 0)
		cout << arr[0];
	else if (n % 2 == 1)
		cout << arr[1];

	return 0;
}