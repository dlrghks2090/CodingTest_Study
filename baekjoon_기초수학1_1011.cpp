// ���� ���ʼ���1_1011��
// Fly me to the Alpha Centauri ����
// ������ �̵��� �Ÿ� : k		���� �̵��� �Ÿ� : k-1  or  k  or  k+1
// x : ������� ,  y : ��������
// x, y �� ���� �־��� ��, �̵� Ƚ���� �ּڰ��� ���϶�.
// ��, ó���� ���������� 1�� �Ÿ��� �̵��Ѵ�.

#include <iostream>

using namespace std;


// 1���� �Ű����� n ���� ���� ���� �����ϰ� �������ν� �ð����⵵�� ũ�� ������׽��ϴ�.
int sum_of_pre_num(int n) {
	double k = 0;
	
	k = (double)(1 + n) * 0.5 * n;

	return (int)k;
}

int main() {

	int T; 
	int* x;
	int* y;
	int M = 0;
	int sum_of_pre = 0;
	int num_of_now = 0;
	int count = 0;

	

	cin >> T;
	x = new int[T];
	y = new int[T];

	for (int i = 0; i < T; i++) {
		cin >> x[i] >> y[i];
	}

	// ������ ���� �׻� ������ ������ ���̴�.
	for (int i = 0; i < T; i++) {
		M = y[i] - x[i];
		sum_of_pre = 1;
		num_of_now = 1;
		count = 1;
		while (1) {
			if (M == 1) {
				break;
			} 
			
			// k+1 �� ���� �̵��Ÿ��� ���� ��, ���� �Ÿ��� �ּ��� �պ��� ���� ���
			if (M - (sum_of_pre + num_of_now + 1) > sum_of_pre_num(num_of_now)) {
				num_of_now += 1;
				sum_of_pre += num_of_now;
				++count;
			}
			// k+1 �� ���� �̵��Ÿ��� ���� ��, ���� �Ÿ��� �ּ��� �հ� ���� ���
			else if (M - (sum_of_pre + num_of_now + 1) == sum_of_pre_num(num_of_now)) {
				count = count+num_of_now + 1;
				break;
			}
			// k+1 �� ���� �̵��Ÿ��� ���� ��, ���� �Ÿ��� �ּ��� �պ��� ���� ���
			
			// k�� ���� �̵��Ÿ��� ���� ��, ���� �Ÿ��� �ּ��� �պ��� ū ���
			else if (M - (sum_of_pre + num_of_now) > sum_of_pre_num(num_of_now - 1)) {
				sum_of_pre += num_of_now;
				++count;
			}
			// k�� ���� �̵��Ÿ��� ���� ��, ���� �Ÿ��� �ּ��� �հ� ���� ���
			else if (M - (sum_of_pre + num_of_now) == sum_of_pre_num(num_of_now - 1)) {
				count = count + num_of_now;
				break;
			}
			// k�� ���� �̵��Ÿ��� ���� ��, ���� �Ÿ��� �ּ��� �պ��� ���� ���
			// k-1�� ���� �̵��Ÿ��� ���� ��, ���� �Ÿ��� �ּ��� �պ��� ū ���
			else if (M - (sum_of_pre + num_of_now-1) > sum_of_pre_num(num_of_now - 2)) {
				sum_of_pre += num_of_now-1;
				num_of_now -= 1;
				++count;
			}
			// k-1�� ���� �̵��Ÿ��� ���� ��, ���� �Ÿ��� �ּ��� �հ� ���� ���
			else if (M - (sum_of_pre + num_of_now - 1) == sum_of_pre_num(num_of_now - 2)) {
				count = count + num_of_now - 1;
				break;
			}
					
		}
				
			
		
		cout << count << endl;
	}

	delete[] x;
	delete[] y;
	return 0;
}