// ����_11098��_�����1_ÿ�ø� ������! ����
// compare �Լ��� Ȱ���� sort�� ���� ���� ������ ���������� ���������� ������ ���� �����ϰ� �ְ� �ݾ��� ������ ã�Ƴ´�.

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