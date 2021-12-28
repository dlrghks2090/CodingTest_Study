// ����_����_10972��_�ǹ�3_���� ���� ����
// ���������� ���� ������ ��Ŀ������ �ľ��ؼ� Ǯ��´�.
//  =>	�� �� ���� ������ arr[i-1] < arr[i] ����   �� -> i �� ���Ҹ� Ȯ���� ó�� ������ arr[i-1] ���� ū ���� swap �� �� i~�� �� �������� �����Ѵ�.


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


vector<int> arr(10001);
vector<int> fin(10001);

int main() {

	int N;
	int tmp = 0;
	
	cin >> N;

	// �־��� �� �Է�
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	// �������� �Է�
	for (int i = 1; i <= N; i++) {
		fin[i] = N + 1 - i;
	}

	// �Է��� ���� ���������� ��� -1 ���
	if (arr == fin) {
		cout << -1;
	}
	// ���������� �ƴѰ��
	else {
		// ������ ������ 
		for (int j = N; j > 1; j--) {
			// �ش� �ε����� ���� ���� �ε����� ������ ũ��
			if (arr[j - 1] < arr[j]) {
				// ���� �ε����� ���� tmp�� ����
				tmp = arr[j - 1];
				// ������ ������ �ش� �ε��� ���� 
				for (int k = N; k >= j; k--) {
					// ���� �ε����� ������ ù��°�� Ŀ���� ���� üũ
					if (tmp < arr[k]) {
						// ù��°�� Ŀ���� ���� ���� �ε����� �� SWAP
						arr[j - 1] = arr[k];
						arr[k] = tmp;
						// �ش� �ε������� ������ �������� ����
						sort(arr.begin() + j, arr.begin() + 1 + N);
						// for �� ����
						break;
					}
				}
				// for �� ����
				break;
			}
		}

		// ���� ���
		for (int j = 1; j <= N; j++) {
			cout << arr[j] << " ";
		}

	}


	

	return 0;
}