// ���� ���ʼ���1_2869��
// �����̴� �ö󰡰� �ʹ� ����
// V : ������ ����
// A : ������ �����̰� ���븦 �ö󰡴� ����
// B : �㿡 �����̰� �̲����� ���븦 �������� ����
// ��, ����� ���� �ö󰡸� �̲������� �ʴ´�.
// �����̰� ������ ������ �ö󰡷��� �� ���� �ɸ����� ���϶�.

#include <iostream>


using namespace std;


int main() {

	int A, B, V;
	int day = 0;
	int total = 0;

	cin >> A >> B >> V;

	while (1) {
		if (total + 100 * A - 99 * B < V) {
			day += 99;
			total = total + 99 * A - 99 * B;
		}
		++day;
		total =total + A;
		if (total >= V) {
			cout << day;
			break;
		}
		total = total - B;

	}


	return 0;
}