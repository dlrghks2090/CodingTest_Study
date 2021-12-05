// ����_10816��_�ǹ�4_���� ī��2 ����
// ���� Ž���� upper_bound �� lower_bound�� ������ ��� �����̴�.

#include<iostream>
#include<algorithm>

using namespace std;

int arr1[500001];
int sol[500001];


int main() {


	// ������� �ð��� �ּҷ� ���̱� ���� ��ġ
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	int mnum = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr1[i];
	}

	// arr1 ������������ ����
	sort(arr1 + 1, arr1 + 1 + N);

	cin >> M;

	// M ���� ���Ұ� �ϳ��� �Էµ� ������ N���� ���Ҹ� ���� arr1���� mnum�� �������� �� ���� �ִ��� ���
	for (int i = 1; i <= M; i++) {
		cin >> mnum;

		// Lower bound	(<=)
		// - ���� ������ �κ� Ž�����̴�. �̺� Ž���� ���� �ٸ����� ����.
		// - target ���� �ִٸ� target ������ ���ų� ū ù ��° ��ġ�� ���Ѵ�.
		// 
		// Upper bound	(<)
		// - target���� ū ù ��° ��ġ�� ���Ѵ�.
		// 
		//�� ���� �������� '=' �� �����̴�.
		cout << upper_bound(arr1 + 1, arr1 + 1 + N, mnum) - lower_bound(arr1 + 1, arr1 + 1 + N, mnum) << " ";
	}
	

	


	return 0;
}

/*

int lower_binary(int*arr,int target,int size) {
	int mid, start, end;
	start = 0, end = size - 1;

	while (end > start){
		mid = (start + end) / 2;
		if (arr[mid] >= target)
			end = mid;
		else start = mid + 1;
	}
	return end;
}

int upper_binary(int*arr, int target,int size) {
	int mid, start, end;
	start = 0, end = size - 1;

	while (end > start) {
		mid = (start + end) / 2;
		if (arr[mid] > target)
			end = mid;
		else start = mid + 1;
	}
	return end;
}

*/