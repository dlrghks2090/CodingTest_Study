#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// ����Ž�� �Լ�
// ������ �Ű������� ����Ͽ� Ǯ����.
void binary_search(vector<int>& a, int start, int end ,int target) {
	int mid = 0;


	if (start > end) {
		cout << "0" << '\n';
		return;
	}

	mid = (start + end) / 2;

	if (a[mid] == target) {
		cout << "1" << '\n';;
		return;
	}
	else if (a[mid] > target) {
		binary_search(a, start, mid-1, target);
	}
	else {
		binary_search(a, mid+1, end, target);
	}


}



int main() {

	// �� �ڵ带 ���� �ʰ� ä������ ��, �ð��ʰ��� ����.
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	int num;

	cin >> N;
	vector<int> v1(N);

	for (int i = 0; i < N; i++) {
		cin >> v1[i];
	}
	sort(v1.begin(), v1.end());

	cin >> M;
	vector<int> v2(M);

	for (int i = 0; i < M; i++) {
		cin >> v2[i];
	}

	for (int i = 0; i < M; i++) {
		binary_search(v1,0, N-1, v2[i]);
	}


	return 0;
}