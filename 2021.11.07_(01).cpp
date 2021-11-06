// ����_5635��_�ǹ�5_���� ����
// ����ü�� �̿��Ͽ� ������� ������ �����ϰ� STL �� sort�Լ��� ����� �����Ͽ� Ǯ����.

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// ����� �����͸� �����ϱ� ���� ����ü ����
struct student {
	string name;
	int day;
	int mon;
	int year;
};

// ���ϼ����� ������������ �����ϱ� ���� compare�Լ�
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

	// compare�Լ��� �����Ͽ� ����ϴ� sort���� �Լ��� ����ߴ�.
	sort(st, st + n, compare);

	cout << st[n - 1].name << '\n' << st[0].name;

	

	delete[] st;

	return 0;
}