#include<iostream>
#include<string>

using namespace std;


int main() {

	string str;
	int steal = 0;
	int total = 0;
	

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {	// ���� ��ȣ�϶�, �踷����� ���� +1
			++steal;
		}
		else if (str[i] == ')' && i != 0) {	// ������ ��ȣ�϶�,
			if (str[i - 1] == '(') {	// �� �� ��ȣ�� ���� ��ȣ�϶�,
				if (steal != 1){	// steal !=1 �̸� steal �Ѱ��� �����ʰ�ȣ�� �������� �Ǹ鼭 ������ �踦 �߶󳽴�.
					--steal;
					total = total + steal;	// �߶� ���� �踷��⸸ŭ �ѷ��� �߰������ش�.
				}
				else {	// steal == 1 �̸� �������� ����鼭 steal == 0 �� �ȴ�.
					--steal;
				}
			}
			else {
				total += 1;	// �踷����� ���� ���κ��� ������ �����ָ鼭
				--steal;	// �踷����� ������ -1 ���ش�.
			}
		}
	}

	cout << total;

	return 0;
}