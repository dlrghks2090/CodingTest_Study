#include<iostream>

using namespace std;

// �Ϲ����� STL sort�� Ǯ�� �޸𸮸� �ʰ��ϰ� �ȴ�.
// ���� �Է��� ���� ������ ī�����Ͽ� ������������ ����ϵ��� �������.

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int arr[10001] = { 0 };
	int a;

	cin >> N;


	for (int i = 0; i < N; i++) {
		
		cin >> a;
		arr[a] += 1;
	}
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << '\n';
		}
	}



	return 0;
}