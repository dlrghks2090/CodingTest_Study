// ����_���Ʈ����_1748��_�ǹ�3_�� �̾� ����1 ����
// N�� 10�� �ŵ��������� ����϶��� ����� ����� Ǯ��� �ߴ�. 

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main() {

	int N;
	string s;
	int size = 0;
	int sol = 0;
	int k = 1;

	cin >> N;
	s = to_string(N);

	size = s.size();

	//cout << "N = " << N << '\n';
	//cout << "size = " << size << '\n';
	//cout << "pow(10,size-1) = " << pow(10, size - 1) << '\n';


	// N�� 10�� �ŵ����� ���� �ƴϸ� N���� ���� ����� (9.....)�� ���� �����ش�.
	if ((N - (pow(10, size - 1) - 1)) > 1) {
		sol += (N - (pow(10, size - 1) - 1)) * (size);
	}
	// N �� 10�� �ŵ����� ���̸� size ��ŭ sol�� ���� �߰����ش�.
	else {
		sol += size;
	}

	// 1���� N���� ���� ����� 9.... ������ �ڸ����� �����ش�.
	for (int i = 1; pow(10, i) <= N; i++) {
		sol += (9 * pow(10, i-1)) * k;
		k = k +1 ;
	}
	cout << sol;



	return 0;
}