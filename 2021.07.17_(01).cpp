#include<iostream>
#include<vector>

using namespace std;

int main() {

	// C 와 C++ 사이의 버퍼 동기화를 끊어 cin, cout 이 독립적인 버퍼를 갖게하는 방식
	//	입출력 속도를 scanf, printf 못지 않게 크게 향상시킨다.
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	vector<int> v;
	int num;
	int ox = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num == 0) {
			if (v.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << v[0] << '\n';
				v.erase(v.begin());
			}
		}
		else {
			if (v.size() == 0) {
				v.emplace_back(num);	// vector의 emplace를 사용해 복사생성자를 호출하지 않고 바로 입력하여 성능을 높인다.
			}
			else {
				for (int j = 0; j < v.size(); j++) {
					if (v[j] >= num) {
						v.emplace(v.begin()+j, num);
						++ox;
						break;
					}
				}
				if (ox == 0) {
					v.emplace_back(num);
				}
				ox = 0;
			}
		}
		
	}


	return 0;
}