// ����_DP_1003��_�ǹ�3_�Ǻ���ġ �Լ� ����
// DP�� top- bottom ����� ����� ������ Ǯ��´�.

#include<iostream>

using namespace std;

int zero[41];	// �ش� ���� ���ϱ���� ȣ���� 0�� Ƚ��
int one[41];	// �ش� ���� ���ϱ���� ȣ���� 1�� Ƚ��
int arr[41];	// �Ǻ���ġ �ش� ������ �ش��ϴ� ��		�� �迭�� ��������ν� �ߺ� �»��� �ٿ���.



int fibo(int n){
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		// �̹� ���� �����ϸ� �ش簪 ���� (�̹� ���� ���̴�.)
		if (arr[n] > 0) {
			
			return arr[n];
		}

		arr[n] = fibo(n - 1) + fibo(n - 2);

		// arr�� �ؿ� ��ġ�ϰ�  n ==2�϶����� zero�� one�� �� ���� arró�� ���� �� �ֵ��� �����ߴ�.
		zero[n] = zero[n - 1] + zero[n - 2];
		one[n] = one[n - 1] + one[n - 2];

		return arr[n];
	}
}

int main() {

	int T;
    int n;

	cin >> T;

	arr[0] = 0;
	arr[1] = 1;
	zero[0] = 1;
	one[1] = 1;
	
	for (int i = 0; i < T; i++) {
        cin >> n;
        fibo(n);
        cout << zero[n] << " " << one[n] << '\n';
	}



	return 0;
}