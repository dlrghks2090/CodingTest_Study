// 백준_1408번_브론즈2_24 문제
// 시간날때, 더 간단한 풀이를 찾아봐야 할 것 같다.

#include<iostream>
#include<string>

using namespace std;

int main() {

	string now;
	string start;
	string sol;

	int hour;
	int min;
	int sec;

	int ox = 0;

	int h, m, s;

	int sol_h, sol_m, sol_s;

	cin >> now;
	cin >> start;

	hour = (now[0] - '0') * 10 + (now[1] - '0');
	min = (now[3] - '0') * 10 + (now[4] - '0');
	sec = (now[6] - '0') * 10 + (now[7] - '0');

	h = (start[0] - '0') * 10 + (start[1] - '0');
	m = (start[3] - '0') * 10 + (start[4] - '0');
	s = (start[6] - '0') * 10 + (start[7] - '0');



	if ((hour > h) || ((hour == h)&&(min > m)) || ((hour == h) && (min == m)&&(sec > s)) ){

		if (sec > s) {
			sol_s = 60 - (sec - s);
			min += 1;
		}
		else {
			sol_s = s - sec;
		}


		if (min == 60) {
			hour += 1;
			min = 0;
		}


		if (min > m) {
			sol_m = 60 - (min - m);
			hour += 1;
		}
		else {
			sol_m = m - min;
		}


		if (hour == 24) {
			hour = 0;
			sol_h = h - hour;
		}
		else {
			sol_h = 24 - (hour - h);
		}

	}
	else {
		if (sec > s) {
			sol_s = 60 - (sec - s);
			min += 1;
		}
		else {
			sol_s = s - sec;
		}


		if (min == 60) {
			hour += 1;
			min = 0;
		}


		if (min > m) {
			sol_m = 60 - (min - m);
			hour += 1;
		}
		else {
			sol_m = m - min;
		}	
		
		sol_h = h - hour;
		
		
	}




	sol.push_back((sol_h / 10) + '0');
	sol_h %= 10;
	sol.push_back((sol_h % 10) + '0');
	sol.push_back(':');

	sol.push_back((sol_m / 10) + '0');
	sol_m %= 10;
	sol.push_back((sol_m % 10) + '0');
	sol.push_back(':');

	sol.push_back((sol_s / 10) + '0');
	sol_s %= 10;
	sol.push_back((sol_s % 10) + '0');
	

	cout << sol;




	return 0;
}