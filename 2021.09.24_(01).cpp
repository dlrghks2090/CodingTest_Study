// ����_����_18870��_�ǹ�2_��ǥ ���� ����
// �Է��ϴ� N���� ������ �� ������ ���� ���� �ߺ����� ����ϴ� ����


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// �Է��ϴ� ���� ������ �����ϱ� ���� ����ü
struct Coor {
	int num;		// �� �Է�
	int order;		// �Է¼����� ����ϱ����� ����
	int sol;		// �ش� ������ ���� ���� ���ڸ� �����ϴ� ����
};


// ���� ũ�⸦ ������������ �����ϱ� ���� �Լ�
bool compare(Coor a, Coor b) {
	if (a.num < b.num) {
		return true;
	}
	else if (a.num == b.num) {
		return a.order < b.order;
	}
	else {
		return false;
	}

}


// ���� �Է¼����� �ǵ����� ���� �Լ�
bool compare2(Coor a, Coor b) {
	if (a.order < b.order) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int N;	// 1<= N <= 1000000
	vector<Coor> v(1000001);
	int count = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> v[i].num;
		v[i].order = i;
	}

	//���� ������������ ����
	sort(v.begin(), v.begin()+N, compare);

	v[0].sol = 0;
	for (int i = 1; i < N; i++) {
		if (v[i - 1].num != v[i].num) {
			++count;		// sol���� ã������ ��ġ
			v[i].sol = count;
		}
		else {
			v[i].sol = count;
		}
	}

	// ���� �Է¼����� �ǵ�����.
	sort(v.begin(), v.begin() + N, compare2);

	for (int i = 0; i < N; i++) {
		cout << v[i].sol << " ";
	}





	return 0;
}