// 백준_11098번_브론즈1_첼시를 도와줘! 문제
// compare 함수를 활용한 sort로 가장 높은 가격이 가진선수를 마지막으로 정렬해 비교적 간단하게 최고 금액의 선수를 찾아냈다.

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


struct player {
	long long cost;
	string name;
};

bool compare(player a, player b) {

	if (a.cost < b.cost) {
		return true;
	}
	else if (a.cost > b.cost) {
		return false;
	}
	else {
		return true;
	}


}


int main() {


	int n;
	int p;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p;
		player* arr = new player[p];

		for (int j = 0; j < p; j++) {
			cin >> arr[j].cost >> arr[j].name;
		}
		sort(arr, arr + p, compare);
		cout << arr[p - 1].name << '\n';
	}




	return 0;
}