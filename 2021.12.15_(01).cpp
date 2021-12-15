// ����_2822��_�ǹ�5_���� ��� ����
// sort STL�� ����� Ǯ��´�.
// ��Ȳ�� �°� �����ϱ� ���� compare , compare2 �� ����� sort�� �����ߴ�.

#include<iostream>
#include<algorithm>

using namespace std;

struct score {
	int s;
	int num;
};

// �ֻ��� ���� 5���� �̾Ƴ������� ���Լ�
bool compare(score a, score b) {

	if (a.s < b.s) {
		return true;
	}
	else if (a.s >= b.s) {
		return false;
	}

}
// �߷��� 5���� ������ �Է¼����� �����ϱ� ���� ���Լ�
bool compare2(score a, score b) {
	if (a.num < b.num) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	score sc[8];
	int sol = 0;

	for (int i = 0; i < 8; i++) {
		cin >> sc[i].s;
		sc[i].num = i+1;
	}


	// ���� ������������ ����
	sort(sc,sc+8, compare);


	for (int i = 7; i >= 3; i--) {
		sol += sc[i].s;
	}

	// �ֻ��� 5�� ������ �� ���
	cout << sol << '\n';


	// �ֻ��� 5���� num�� ������������ ����
	sort(sc + 3, sc + 8, compare2);

	for (int i = 3; i < 8; i++) {
		cout << sc[i].num << " ";
	}



	return 0;
}