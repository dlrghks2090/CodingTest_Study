// ���� 2163��_�����3_���ݸ� �ڸ��� ����
// ��ȭ������ ���ݸ��� �ڸ��� ���� ã�Ƴ��� Ǯ����.

#include<iostream>

using namespace std;


int main() {

	int N, M;
	int sol;


	cin >> N >> M;

	// ��ȭ���� �̿��� ã�� ����
	sol = (N - 1) + N * (M - 1);

	cout << sol;



	return 0;
}