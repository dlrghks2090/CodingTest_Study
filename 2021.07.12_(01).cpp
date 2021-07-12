#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N, K;
	int num = 0;
	vector<int> n;
	vector<int> sol;
	
	cin >> N >> K;
	
	//cout << "------------숫자 입력-------------" << '\n';
	for (int i = 1; i <= N; i++) {
		n.push_back(i);
		//cout << i << "번째 숫자 입력" << '\n';
	}

	//cout << "----------- sol에 저장 ------------" << '\n';
	while (n.size() !=0) {

		num = num + K - 1;
		if (num > n.size()-1){
			while (num > n.size()-1) {
				num = num - (n.size()-1)-1;
			}
		}
		//cout <<"num :" << num <<"출력 숫자: " << n[num] << " n의 사이즈: " << n.size() <<  '\n';
		sol.push_back(n[num]);
		n.erase(n.begin() + num);

	}

	//cout << "-------------정답 출력-------------" << '\n';
	cout << "<";
	for (int i = 0; i < sol.size(); i++) {
		cout << sol[i];
		if (i != sol.size() - 1) {
			cout << ", ";
		}
	}
	cout << ">";

	return 0;
}