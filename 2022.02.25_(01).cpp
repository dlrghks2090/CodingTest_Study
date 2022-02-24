#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int arr[500001] = { 0, };	// �Է°��� �����ϴ� �迭
int m[500001] = { 0, };		// �ֺ��� �����ϴ� �迭

int main() {

	int N;
	int mean = 0;	// ������
	int median = 0;		// �߾Ӱ�
	int mode = 0;		// �ֺ�
	int range = 0;		// ����

	// �ֺ��� ���ϴµ� ����ϴ� ������
	int count = 0;
	int max_count = 0;
	int same_mode = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	//������
	for (int i = 0; i < N; i++) {
		mean += arr[i];
	}
	mean = round((double)mean/N);  // round�Լ��� ����� �Ҽ��� �ؿ��� �ݿø��� ���־����ϴ�.

	//�߾Ӱ�
	if (N > 1) {
		// �������� ����
		sort(arr, arr + N);
		median = arr[N / 2];	// �Է°��� ������ �׻� Ȧ�� �̹Ƿ� �Է°����� 1���� �ƴ� ���� �߾Ӱ�
	}
	else
		median = arr[0];

	//�ֺ�
	count = 1;	// ���� ���� �󵵼� üũ
	max_count = 1;	// �ֺ��� �󵵼� üũ
	same_mode = 1;	// �ֺ��� ������ üũ
	m[0] = arr[0];	// �ֺ��� �����ϴ°��� ù��°�� arr[0]���� �ʱⰪ ����
	mode = arr[0];	// �ֺ��� ����� arr[0]���� �ʱⰪ ����
	for (int i = 1; i < N; i++) {

		if (arr[i] == arr[i - 1]) {
			++count;
		}
		else
			count = 1;

		if (count == max_count) {
			m[same_mode] = arr[i];
			++same_mode;
		}
		else if (count > max_count) {
			max_count = count;
			same_mode = 1;
			m[0] = arr[i];
		}
	}
		// �ֺ��� �������� ��� 2��°�� ���� ���� ���
	if (same_mode == 1)
		mode = m[0];
	else
		mode = m[1];

	//����
	range = arr[N - 1] - arr[0];

	cout << mean << '\n' << median << '\n' << mode << '\n' << range << '\n';

	return 0;
}