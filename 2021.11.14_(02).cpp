// ����_10984��_�����3_�� ������ ������ ����
// ���� ����ϴ� ������� ����� ��������. �׿ܿ��� ����Ҹ��� ��Ұ� ���� ��������.


#include<iostream>

using namespace std;

int main() {

	int T;
	int N;
	int* C;
	double* G;
	int total = 0;
	double ever = 0.0;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;
		C = new int[N];
		G = new double[N];

		for (int j = 0; j < N; j++) {
			cin >> C[j] >> G[j];
		}

		for (int k = 0; k < N; k++) {
			total += C[k];
			ever += G[k]*C[k];
		}
		ever = ever / total;

		// �Ҽ��� �Ʒ� 1�ڸ������� ��µǵ��� ����
		cout << fixed;
		cout.precision(1);

		cout << total << " " << ever << '\n';
		
		total = 0;
		ever = 0;

	}





	return 0;
}