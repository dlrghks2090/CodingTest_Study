// 백준_정렬_실버5_나이순 정렬 문제
// compare함수를 적용시켜 sort로 푸는 문제였다.
//	이 문제를 풀면서 배운것>
//		compare함수를 만들 때 경의의 수를 잘 따져서 구성해야 된다는 점을 다시 한번 상기하게 되는 문제였다.

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
	cout << "-----------------입력 확인-------------------" << '\n';
	for (int i = 0; i < N; i++) {
		cout << vec[i].year << " " << vec[i].name << '\n';
		vec[i].push_number = i;
	}
	*/

	sort(vec.begin(), vec.end(), compare);


	//cout << "-----------------정렬 확인-------------------" << '\n';
	for (int i= 0; i < N; i++) {
		
		cout << vec[i].year << " " << vec[i].name << '\n';
		
	}


	return 0;
}