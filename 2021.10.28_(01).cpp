// ���� 17103��_�ǹ�2_������ ��Ƽ�� ����
// �ð��ʰ��� ��� Ʋ�ȴ�.
// -> �����佺�׳׽��� ü�� ����� ���Ҵ�.
#include<iostream>
#include<vector>

using namespace std;


int number = 1000000;
int arr[1000001];


// �����佺�׳׽��� ü ���
void prime_number() {

	for (int i = 2; i <= number; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= number; i++) {
		if (arr[i] == 0) {
			continue;
		}

		for (int j = 2 * i; j <= number; j += i) {
			arr[j] = 0;
		}
	}

}

int main() {

	int T;
	int num;

	cin >> T;

	prime_number();

	for (int i = 0; i < T; i++) {
		cin >> num;
		int j = 2;
		int count = 0;

		while (j <= num / 2) {
			if (arr[j] != 0 && arr[num - j] != 0) {
				++count;
			}
			++j;
		}
		cout << count << '\n';
		count = 0;
		j = 2;

	}



	return 0;
}