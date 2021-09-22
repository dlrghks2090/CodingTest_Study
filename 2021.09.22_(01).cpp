// ����_����_�ǹ�5_���̼� ���� ����
// compare�Լ��� ������� sort�� Ǫ�� ��������.
//	�� ������ Ǯ�鼭 ����>
//		compare�Լ��� ���� �� ������ ���� �� ������ �����ؾ� �ȴٴ� ���� �ٽ� �ѹ� ����ϰ� �Ǵ� ��������.

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;

struct Judge {
	int year;
	string name;
	int push_number;
};

bool compare(Judge a, Judge b) {
	if (a.year == b.year) {
		return a.push_number < b.push_number;
	}
	else if (a.year < b.year) {
		return true;
	}
	else {
		return false;
	}

}

int main() {

	int N;

	cin >> N;
	vector<Judge> vec(N);

	for (int i = 0; i < N; i++) {
		cin >> vec[i].year >> vec[i].name;
		vec[i].push_number = i;
	}


	/*
	cout << "-----------------�Է� Ȯ��-------------------" << '\n';
	for (int i = 0; i < N; i++) {
		cout << vec[i].year << " " << vec[i].name << '\n';
		vec[i].push_number = i;
	}
	*/

	sort(vec.begin(), vec.end(), compare);


	//cout << "-----------------���� Ȯ��-------------------" << '\n';
	for (int i= 0; i < N; i++) {
		
		cout << vec[i].year << " " << vec[i].name << '\n';
		
	}


	return 0;
}