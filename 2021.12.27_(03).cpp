// ����_���Ʈ����_15666��_�ǹ�2_N�� M(12) ����

#include<iostream>
#include<algorithm>

using namespace std;

int N, M;
int arr[9];
int sol[9];
int tmp;

void sequence(int count, int idx) {
	// count �� M���� Ŀ���� sol ���
	if (count > M) {
		for (int i = 1; i <= M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	else {
		// idx���� for�� ����
		for (int i = idx; i <= N; i++) {
			if (arr[i] != tmp) {
				sol[count] = arr[i];
				// ��� sequence�� idx �κп� i �� �־��� ���� sequence�� ����� arr�� ���Һ��� ������ �� �ֵ��� �������.
				sequence(count + 1, i);
			}
			// sol�� �� ���ҿ� �ߺ��� �����ϱ� ���� ��ġ�̴�.
			tmp = arr[i];
		}
	}
}

int main() {

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	// arr�� ������������ ����
	sort(arr + 1, arr + 1 + N);

	sequence(1, 1);


	return 0;
}