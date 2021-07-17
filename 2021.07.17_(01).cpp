#include<iostream>
#include<vector>

using namespace std;

int main() {

	// C �� C++ ������ ���� ����ȭ�� ���� cin, cout �� �������� ���۸� �����ϴ� ���
	//	����� �ӵ��� scanf, printf ���� �ʰ� ũ�� ����Ų��.
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
				v.emplace_back(num);	// vector�� emplace�� ����� ��������ڸ� ȣ������ �ʰ� �ٷ� �Է��Ͽ� ������ ���δ�.
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