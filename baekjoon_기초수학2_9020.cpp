// ���� ���ʼ���2_9020��
// �������� ���� ����
// �������� ���� : 2���� ū ¦���� �� �Ҽ��� ������ ��Ÿ�� �� �ִ�. �̷��� ���� ������ ����� �Ѵ�.
// ������ ��Ƽ�� : ¦���� �� �Ҽ��� ������ ��Ÿ���� ǥ��
// ex > 4 = 2+2, 6 = 3+3, 8 = 3+5,.....
// 2���� ū ¦�� n�� �־����� ��, n�� ������ ��Ƽ���� ����ϴ� ���α׷��� �ۼ��϶�.
// ���� ������ n�� ������ ��Ƽ���� ���� ������ ��쿡�� �� �Ҽ��� ���̰� ���� ���� ���� ����Ѵ�.

#include<iostream>
#include<vector>

#define MAX 10000
using namespace std;

int sosu(int n){

	int count = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			++count;
		if (count > 2)
			break;
	}
	if (count == 2)
		return 1;
	else
		return 0;
}


int main() {

	int T;
	int* n;
	int a = 0;
	int b = 0;
	int ox = 0;
	vector<int> v;
	int idx = 0;

	cin >> T;
	n = new int[T];
	
	for (int i = 0; i < T; i++) {
		cin >> n[i];
	}
	for (int i = 2; i <= 10000; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				++ox;
		
		}
		if(ox == 2)
			v.push_back(i);
		ox = 0;
	}
	

	for (int i = 0; i < T; i++) {

		while (v[idx] <= n[i] / 2) {
			for (int aa = 0; aa < v.size(); aa++) {
				if (v[idx] + v[aa] > n[i])
					break;
				if (n[i] - v[idx] == v[aa]) {
					a = v[idx];
					b = v[aa];
					break;
				}
				
			}
			++idx;
		}

		cout << a << " " << b << endl;
		a = 0;
		b = 0;
		idx = 0;
	
	}

	return 0;
}