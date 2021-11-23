// ����_DP_2011��_�ǹ�1_��ȣ�ڵ� ����
// DP�� bottom - top ����� ����� Ǯ���س´�.
// ��ȭ���� �ش� ������ ���� 0���� �ƴ����� ���� ������.
// ��ȭ��	:	 arr[i] == 0�϶�,						dp[i] = dp[i - 2] % 1000000
//				 arr[i - 1] == 0�϶�,					dp[i] = dp[i - 1] % 1000000;
//				 arr[i - 1] * 10 + arr[i] <= 26�϶�,	dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000
//											�Ƴ���,		dp[i] = (dp[i - 1]) % 1000000

// �� ������ ����ó���� �������� �ϴ°� �������.
// ó���� 0���� �����Ҷ�, �߰��� 0�� ���Դµ� �������� 1�̳� 2�� �ƴҶ�, �Է°��� 0~9 ���̰��� �ƴ� �ٸ� ���϶� �� ���ܰ�쿴��.

#include<iostream>
#include<string>

using namespace std;


int dp[5001];
int arr[5001];
string s;

int main() {

	int size = 0;
	int tmp = 0;

	cin >> s;

	size = s.size();

	for (int i = 0; i < size; i++) {

		if (s[0] - '0' == 0) {
			cout << 0;
			return 0;
		}
		if (0 <= (s[i] - '0') && (s[i] - '0') <= 9) {
			arr[i + 1] = s[i] - '0';
			if (arr[i + 1] == 0) {
				if (arr[i] != 2 && arr[i] !=1) {
					cout << 0;
					return 0;
				}
			}
		}
		else {
			cout << 0;
			return 0;
		}
	}

	dp[0] = 1;
	dp[1] = 1;
	

	for (int i = 2; i <= size; i++) {

		if (arr[i] == 0) {
			dp[i] = dp[i - 2]%1000000;
			
		}
		else if (arr[i - 1] == 0) {
			dp[i] = dp[i - 1]%1000000;
			
		}
		else {
			tmp = arr[i - 1] * 10 + arr[i];
			if (tmp <= 26) {

				dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000;
			}
			else {
				dp[i] = (dp[i - 1]) % 1000000;
			}
		}
	}

	cout << dp[size];


	  



	return 0;
}