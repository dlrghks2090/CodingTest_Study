// ����_2004��_�ǹ�2_���� 0�� ���� ����
// 
// ���Ǵ� ������ Ŀ�� long long���� �������־�� �ߴ�.
// ���� 0�� ������ ���϶�� ������ �ٽ��� ��� �� 2�� 5�� �����ľ��� �ٽ����� ĳġ�ϰ� �����ߴ�.

#include<iostream>

using namespace std;

void two_five_count(long long num, long long& two_count, long long& five_count) {


	for (long long i = 2; i <= num; i = i*2) {
		two_count += num / i;
	}
	for (long long i = 5; i <= num; i = i * 5) {
		five_count += num / i;
	}

}


int main() {

	long long n, m;
	long long final_two = 0;
	long long final_five = 0;
	long long sol = 0;

	long long n_two = 0;
	long long n_five = 0;
	long long m_two = 0;
	long long m_five = 0;
	long long n_m_two = 0;
	long long n_m_five = 0;

	cin >> n >> m;


	two_five_count(n, n_two, n_five);
	two_five_count(m, m_two, m_five);
	two_five_count(n - m, n_m_two, n_m_five);


	//cout << n_two << " " << n_five << '\n';
	//cout << m_two << " " << m_five << '\n';
	//cout << n_m_two << " " << n_m_five << '\n';


	final_two = n_two - m_two - n_m_two;
	final_five = n_five - m_five - n_m_five;

	//cout << final_two << " " << final_five << '\n';


	cout << ((final_two > final_five) ? final_five : final_two) << '\n';


	return 0;
}