// ����_DP_2747��_�����3_�Ǻ���ġ �� ����
// 
// �⺻���� �Ǻ���ġ���ϴ� ���� ����ϸ� ���� ���� ���ϱ����� ������ ����ϰ� �ȴ�.
// �̷��� �ǹ̾��� ����� ���� �ʵ��� DP�� bottom - top ����� ����� �ð����⵵�� ���� �ٿ���.

#include<iostream>

using namespace std;


int arr[46];



int fibo(int n) {

	if (n <= 1) {
		arr[n] = n;
		return arr[n];
	}

	if (arr[n] != 0) {
		return arr[n];
	}
	arr[n] = fibo(n - 1) + fibo(n - 2);
	return arr[n];
}


int main() {

	int n;

	cin >> n;

	cout << fibo(n);



	return 0;
}