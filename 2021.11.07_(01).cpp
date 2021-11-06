// 백준_5635번_실버5_생일 문제
// 구조체를 이용하여 사람들의 정보를 정리하고 STL 의 sort함수를 사용해 정렬하여 풀었다.

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// 사람의 데이터를 저장하기 위한 구조체 정의
struct student {
	string name;
	int day;
	int mon;
	int year;
};

// 생일순서로 오름차순으로 정렬하기 위한 compare함수
bool compare(student s1, student s2) {
	if (s1.year < s2.year) {
		return true;
	}
	else if (s1.year == s2.year) {
		if (s1.mon < s2.mon) {
			return true;
		}
		else if (s1.mon == s2.mon) {
			if (s1.day < s2.day) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}


}

int main() {

	int n;
	student* st;	

	cin >> n;
	st = new student[n];

	for (int i = 0; i < n; i++) {
		cin >> st[i].name >> st[i].day >> st[i].mon >> st[i].year;
	}

	// compare함수를 정의하여 사용하는 sort정렬 함수를 사용했다.
	sort(st, st + n, compare);

	cout << st[n - 1].name << '\n' << st[0].name;

	

	delete[] st;

	return 0;
}