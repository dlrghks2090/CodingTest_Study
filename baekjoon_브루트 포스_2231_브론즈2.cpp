// ���� ���Ʈ ����_2231��
// ������ ����_���̵�: �����2
// 245�� ������ : 245+2+4+5 = 256 �̵ȴ�.
// 245�� 256�� �����ڶ�� �Ѵ�.
// �ڿ��� N�� �Է��� ��, N�� ���� ���� �����ڸ� ���س��� ���α׷��� �ۼ��϶�.
// ��, �����ڰ� ���� ��쿡�� 0�� ����Ѵ�.


#include<iostream>
#include<string>
#include<cmath>

using namespace std;

// 1,3,5,7,9,
// 1+1=2  2+2 =4  3+3 6  4+4=8  5+5 =10  6+6 = 12  7+7=14
int main() {

	int N=0;
	int ten_num = 1;
	int sol = 0;
	int i_tmp = 0;
	string S_N;

	cin >> S_N;


	for (int i = 0; i < S_N.size(); i++) {
		for (int j = 0; j < i; j++) {
			ten_num *= 10;
		}
		N += ((int)S_N[S_N.size() - 1-i] - 48) * ten_num;
		ten_num = 1;
	}

	// ���ڸ� ���϶� �����ڰ� ���� ���
	if (N == 1 || N == 3 || N == 5 || N == 7 || N == 9) {
		cout << 0 << endl;
		return 0;
	}

	//cout << N << endl;

	for (int i = N - 9 * S_N.size(); i <= N; i++) {
		i_tmp = i;

		// �����ڰ� �־��� �ڿ��� ���� �ڸ����� ���� ��
		if (i / (int)pow(10, S_N.size() - 1) != 0) {
			for (int j = S_N.size()-1; j >= 0; j--) {
				sol += i_tmp / pow(10, j);
				i_tmp = (int)i_tmp % (int)pow(10, j);
				//cout << "���� �ڸ����϶�: " << pow(10, j) << "  " << sol << endl;
			}
			sol += i;
				if (sol == N) {
					cout << i << endl;
						return 0;
				}
			sol = 0;
		}
		// �����ڰ� �־��� �ڿ��� ���� �ڸ������� ���� ��
		else if (i / (int)pow(10, S_N.size() - 1) == 0) {
			for (int j = S_N.size() - 2; j >= 0; j--) {
				sol += i_tmp / pow(10, j);
				i_tmp = (int)i_tmp % (int)pow(10, j);
				//cout << "�ٸ� �ڸ����϶�: " << pow(10, j) << sol << endl;
			}
			sol += i;
			if (sol == N) {
				cout << i << endl;
				return 0;
			}
			sol = 0;
		}

	}

	// �ش簪�� �����ڰ� ������� 0�� ���
	cout << 0 << endl;
	





	return 0;
}