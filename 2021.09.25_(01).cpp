// ����_������ �� ���շ�_11050��_�����1_���� ���1 ����
// ���ײ��� ( (N K) ���η�)  = N! / (K!(N-K)!)
#include<iostream>

using namespace std;


int factorial(int num) {

	int tmp = 1;


	for (int i = 1; i <= num; i++) {
		tmp *= i;
	}

	return tmp;

}

int main() {

	int N, K;
	int sol;

	cin >> N >> K;

	sol = factorial(N) / (factorial(K) * factorial(N - K));

	cout << sol;


	return 0;
}