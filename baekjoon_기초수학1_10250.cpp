//백준 기초수학1_10250번
// ACM 호텔 문제
// H : 총 층의 높이
// W : 한 층의 방의 수
// N : 몇 번째 손님인지
// N번째 손님에게 배정되어야 하는 방 번호를 출력하라.

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
		// 각 테스트 데이터 별 방번호를 구하는 소스코드
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