// ����_BackTracking(DFS)_6603��_�ǹ�2
// �������� ��Ʈ��ŷ ������ DFS(���)�� ����Ͽ� Ǯ��´�.

#include<iostream>

using namespace std;

int arr[14];
int sol[6];
int k;

// ��͸� �̿��� DFS �Լ� ����
void dfs(int n, int count) {

	// count �� 6�� �Ǹ� �� ���� ���
	if (count == 6) {
		for (int i = 0; i < 6; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = n; i < k; i++) {
		sol[count] = arr[i];
		dfs(i + 1, count + 1);		//����������� dfs����
	}


}

int main() {


	while (1) {

		cin >> k;
		// k�� �Է°��� 0�� ������ ���α׷� ����
		if (k == 0) {
			break;
		}
		for (int i = 0; i < k; i++) {
			cin >> arr[i];
		}
		// ������ ù��° ���Һ��� ����, count 0���ͽ���(6�̵Ǹ� ���)
		dfs(0,0);
		cout << '\n';
	}




	return 0;
}