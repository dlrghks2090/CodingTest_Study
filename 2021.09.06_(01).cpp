#include<iostream>
#include<algorithm>
using namespace std;

// STL sort�� ������� �ʰ� Ǯ���� �ߴ��� �ð��ʰ��� �߻��ߴ�.
// �׷��� STL sort�� ����Ͽ� Ǭ Ǯ��

int main() {

	int N;
	int* arr;

	cin >> N;
	arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}

	delete[] arr;

	return 0;  
}




// �Ʒ��� STL sort�� ������� �ʰ� ���� �ڵ��̴�.

/*
#include<iostream>

using namespace std;

int N;
int* arr;

void QuickSort(int i, int j) {

	if (i >= j)
		return;
	int pivot = arr[(i + j) / 2];
	int left = i;
	int right = j;

	while (left <= right) {
		while (arr[left] < pivot) {
			++left;
		}
		while (arr[right] > pivot) {
			--right;
		}
		if (left <= right) {
			swap(arr[left], arr[right]);
			++left;
			--right;
		}
	}
	QuickSort(i, right);
	QuickSort(left, j);

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	QuickSort(0, N - 1);

	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}


	delete[] arr;

	return 0;
}
*/