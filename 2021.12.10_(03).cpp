// ����_�θ�Ʈ ����_2309��_�����2_�ϰ� ������ ����
// DFS ��� ������� ������ Ǯ��½��ϴ�.

#include<iostream>
#include<algorithm>

using namespace std;

int arr[9];
int sol[7];

// DFS �Լ�
void dfs(int n, int count) {

	// ���� 7���� �̾��� ��
	if (count == 7) {
		int all = 0;
		for (int i = 0; i < 7; i++) {
			all += sol[i];
		}
		// 7�� ���� ���� 100�̸� 
		if (all == 100) {
			// ������������ �� ����
			sort(sol, sol + 7);
			for (int j = 0; j < 7; j++) {
				cout << sol[j] << '\n';
			}
			return;
		}
	}

	for (int k = n; k < 9; k++) {
		sol[count] = arr[k];
		dfs(k + 1, count + 1);
	}
}

int main() {
	
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	dfs(0, 0);

	return 0;
}