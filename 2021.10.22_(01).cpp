// 백준_2004번_실버2_조합 0의 개수 문제
// 
// 사용되는 수들이 커서 long long으로 선언해주어야 했다.
// 뒤의 0의 개수를 구하라는 문제의 핵심은 약수 중 2와 5의 개수파악이 핵심임을 캐치하고 접근했다.

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