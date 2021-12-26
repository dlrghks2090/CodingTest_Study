// ����_���Ʈ����_15663��_�ǹ�2_N�� M(9) ����
// �ߺ��� ���ϴ� ����� ã�°� �ٽ��� ��������.
// ���� tmp �� ����� ���� ������ �� ���� �ʵ��� �ߴ�.

#include<iostream>
#include<algorithm>

using namespace std;

int N, M;
int arr[9];
int sol[9];
int ox = 0;
int tmp = 0;

void sequence(int count) {

	if (count > M) {
		for (int i = 1; i <= M; i++) {
			
			cout << arr[sol[i]] << " ";
		}
		cout << '\n';
	}
	else {
		// sol�� �� �ε��� �ڸ��� ���ڻ̱⸦ �����Ҷ� �׻� tmp=0 ���� �ʱ�ȭ
		tmp = 0;
		for (int i = 1; i <= N; i++) {
			ox = 0;
			// arr�迭�� ����� ���Ҹ� �ٽ� ���� �ʵ��� sol�� ����Ǿ��ִ� arr�迭�� �ε����� ������ ++ox�� ���ش�.
			for (int j = 1; j <= count - 1; j++) {
				if (sol[j] == i) {
					++ox;
				}
			}

			// �̹� ���� ���̸� for�� ������ �̵�
			if (ox != 0) {
				continue;
			}
			
			// i-1���� ����� ���� ���� ������ sol�� ���� �ε������� �̵��� �Ѵ�.
			if (arr[i] != tmp) {
				sol[count] = i;
				sequence(count + 1);
			}
			// sol�� ���� �ε����� ���� ���� ���� �ʱ� ���� ��ġ
			tmp = arr[i];
			

		}
	}

}

int main(){

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	sort(arr + 1, arr + N + 1);

	sequence(1);

	return 0;
 }