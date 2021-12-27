// ����_���Ʈ����_15664��_�ǹ�2_N�� M(10)����

#include<iostream>
#include<algorithm>

using namespace std;

int N, M;
int arr[9];
int sol[9];
int tmp = 0;	// sol�� �� �ε����� �ߺ��Ǵ� ���� ���� �ʵ��� �ϱ� ���� ����

void sequence(int count, int idx) {
	// count �� M���� ũ�� �Ǵ� ��� ������ش�.
	if (count > M) {
		for (int i = 1; i <= M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	// count�� ä������ �ʾҴµ� idx�� N�� �ʸӰ��� �Լ� ����
	else if (idx > N) {
		return;
	}
	else {
		tmp = 0;
		// idx���� for���� �����Ͽ� ������������ ��µǵ��� ����
		for (int i = idx; i <= N; i++) {

			// tmp�� Ȱ���� sol�� ���� �ε����� �ߺ��� ���� ���� �ʵ��� �ߴ�.
			if (arr[i] != tmp) {
				sol[count] = arr[i];
				sequence(count + 1, i + 1);
			}
			tmp = arr[i];
		}
	}
}

int main() { 

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	sort(arr + 1, arr + 1 + N);

	sequence(1, 1);

	return 0;
}