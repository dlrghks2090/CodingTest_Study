//���� ���ʼ���1_10250��
// ACM ȣ�� ����
// H : �� ���� ����
// W : �� ���� ���� ��
// N : �� ��° �մ�����
// N��° �մԿ��� �����Ǿ�� �ϴ� �� ��ȣ�� ����϶�.

#include <iostream>


using namespace std;


int main() {

	int T;
	int* H;
	int* W;
	int* N;
	int room = 0;
	int h_ = 0;
	int w_ = 0;

	cin >> T;

	H = new int[T];
	W = new int[T];
	N = new int[T];

	for (int i = 0; i < T; i++) {
		cin >> H[i] >> W[i] >> N[i];
	}

	for (int i = 0; i < T; i++) {
		// �� �׽�Ʈ ������ �� ���ȣ�� ���ϴ� �ҽ��ڵ�
		while (N[i] - H[i] * w_ > H[i]) {
			++w_;
		}
		room = w_+1 ;
		h_ = 100*(N[i] - H[i] * w_);
		room += h_;
		
			
		cout << room<<endl;
		h_ = 0;
		w_ = 0;
		room = 0;
	}

	delete[] H;
	delete[] W;
	delete[] N;
	return 0;
}