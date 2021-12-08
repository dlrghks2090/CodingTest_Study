// 백준_5430번_골드5_AC문제
// 
// vector 와 deque의 차이점을 확실히 인식한 후 풀이에 성공한 문제였다.
// vector의 경우 컨테이너의 끝 위치에서만 삽입 제거가 용이하고 앞이나 중간에서는 성능이 현저히 떨어진다.
// 그러나 deque의 경우 컨테이너의 앞과 끝에서 삽입,제거가 용이하고 중간에서 성능이 떨어진다.
// 이점을 확실히 인지한 후 이 문제를 deque로 풀이해냈다.

// vector의 경우 컨테이너 앞쪽에 삽입시 이전의 데이터 수만큼 한칸씩 이동하는 계산이 필요하다

#include<iostream>
#include<string>
//#include<vector>
#include<deque>

using namespace std;

int main() {

	int T;
	string s;
	int num;
	string ele;
	

	cin >> T;

	for (int i = 0; i < T; i++) {
		//vector<int> v;
		deque<int> dq;
		int reverse = 0;
		string tmp = "";

		cin >> s;		// 명령어 입력
		cin >> num;		// 원소의 개수 입력
		cin >> ele;		// 원소가 들어있는 배열 입력

		
		for (int j = 1; j <= ele.size(); j++) {

			if (ele[j] == ',') {
				//v.push_back(stoi(tmp));
				dq.push_back(stoi(tmp));
				tmp.clear();
			}
			else if (ele[j] == ']') {
				if (j == 1) {
					break;
				}
				else {
					//v.push_back(stoi(tmp));
					dq.push_back(stoi(tmp));
					tmp.clear();
				}
			}
			else {
				tmp.push_back(ele[j]);
			}
		}
		tmp.clear();
		

		/*
		for (int j = 0; j < num; j++) {
			cout << v[j] << " ";
		}
		cout << '\n';
		*/


		for (int j = 0; j < s.size(); j++) {
			if (s[j] == 'R') {
				++reverse;
			}
			else if (s[j] == 'D') {
				if (num > 0) {
					if (reverse % 2 == 0) {
						//v.erase(v.begin());
						dq.pop_front();
					}
					else {
						//v.pop_back();
						dq.pop_back();
					}
					--num;
				}
				else {
					--num;
				}
			}
		}

		if (num >= 0) {
			cout << "[";
			if (reverse % 2 == 0) {
				for (int j = 0; j < num; j++) {
					if (j == num - 1) {
						//cout << v[j];
						cout << dq[j];
					}
					else {
						//cout << v[j] << ",";
						cout << dq[j] << ",";
					}
				}
				cout << "]" << '\n';
			}
			else {
				for (int j = num-1; j >= 0; j--) {
					if (j == 0) {
						//cout << v[j];
						cout << dq[j];
					}
					else {
						//cout << v[j] << ",";
						cout << dq[j] << ",";
					}
				}
				cout << "]" << '\n';

			}
		}
		else {
			cout << "error" << '\n';
		}

	}




	return 0;
}