// ����_�̺�Ž��_10815��_�ǹ�4_���� ī�� ����
// sort�� �� �̺�Ž���� ����� ����� ���� ���ѽð��ȿ� ����� ���;��ϴ� ��������.

#include<iostream>
#include<algorithm>

using namespace std;

int arr1[500001];
int arr2[500001];
int sol[500001];

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr1[i];
	}
	
	cin >> M;

	for (int i = 1; i <= M; i++) {
		cin >> arr2[i];
	}

	sort(arr1 + 1, arr1 + N + 1);

	for (int i = 1; i <= M; i++) {
		int left = 1;
		int right = N;
		int mid = (left + right) / 2;
		while (left <= right) {
			if (arr2[i] == arr1[mid]) {
				sol[i] = 1;
				break;
			}

			if (arr2[i] < arr1[mid]) {
				right = mid-1;
			}
			else {
				left = mid+1;
			}
			mid = (left + right) / 2;
		}
	}

	for (int i = 1; i <= M; i++) {
		cout << sol[i] << " ";
	}




	return 0;
}