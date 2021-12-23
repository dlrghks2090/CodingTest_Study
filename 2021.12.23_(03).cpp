// ����_���Ʈ����_15654��_�ǹ�3_N�� M(5) ����

#include<iostream>
#include<algorithm>

using namespace std;

int N, M;
int arr[8];
int sol[8];
int ox = 0;


void sequence(int count) {

	if (count == M) {
		for (int i = 0; i < M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	else {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j <= count - 1; j++) {
				if (sol[j] == arr[i]) {
					++ox;
					break;
				}
					
			}
			if (ox == 0) {
				sol[count] = arr[i];
				sequence(count + 1);
			}
			ox = 0;
		}
	}


}

int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);
	
	sequence(0);


	return 0;
}