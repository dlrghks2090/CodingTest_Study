// ����_���Ʈ����_15656��_�ǹ�3_N�� M(7) ����

#include<iostream>
#include<algorithm>

using namespace std;

int N, M;
int arr[7];
int sol[7];

void sequence(int count) {

	// 0���� ������ count���� M�� �������� sol �迭 ���
	if (count == M) {
		for (int i = 0; i < M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	// �ߺ� ������ �����ϵ��� for�� i = 0 ���� �����ߴ�.
	else {
		for (int i = 0; i < N; i++) {
			sol[count] = arr[i];
			sequence(count + 1);
		}
	}


}

int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	// ������������ �迭 ����
	sort(arr, arr + N);

	sequence(0);


	return 0;
}