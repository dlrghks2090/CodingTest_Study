#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N, K;
	int num = 0;
	vector<int> n;
	vector<int> sol;
	
	cin >> N >> K;
	
	//cout << "------------���� �Է�-------------" << '\n';
	for (int i = 1; i <= N; i++) {
		n.push_back(i);
		//cout << i << "��° ���� �Է�" << '\n';
	}

	//cout << "----------- sol�� ���� ------------" << '\n';
	while (n.size() !=0) {

		num = num + K - 1;
		if (num > n.size()-1){
			while (num > n.size()-1) {
				num = num - (n.size()-1)-1;
			}
		}
		//cout <<"num :" << num <<"��� ����: " << n[num] << " n�� ������: " << n.size() <<  '\n';
		sol.push_back(n[num]);
		n.erase(n.begin() + num);

	}

	//cout << "-------------���� ���-------------" << '\n';
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