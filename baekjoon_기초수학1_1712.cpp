// ���� �⺻����1��Ʈ_1712������
// ���ͺб��� ����
// A : ��Ʈ�� ����ȸ���� �������,   B : ��Ʈ�� �Ѵ뿡 ���� �������,   C : ��Ʈ�� �Ѵ��� �Ǹ� ����
// ���ͺб��� : ���ʷ� �� ������ �� ��뺸�� ������ ������ �߻��ϴ� ����
// A,B,C �� �־��� �� ���ͺб����� ���϶�.


#include <iostream>


using namespace std;
int main() {
	long long int A, B, C;
	long long int num = 0;

	cin >> A >> B >> C;

	if (B >= C) {
		cout << -1;
		return 0;
	}

	while (A+B*num>=C*num) {
		if (A + B * (num + 100) >= C * (num + 100)) {
			num = num + 100;
			continue;
		}
		++num;
	}
	cout << num;

	return 0;
}