// ���� 9613��_�ǹ�3_GCD �� ����
// �� ���̽��� ������ �ִ������� ���� ���ϴ� �����̴�.

// ������ ��� Ʋ�ȴµ� Ʋ�� ������ ��������.
//	 Ʋ�� ������ sum_of_gcd�� ���� ������ �������� ���� �ڷ����� int���ؼ� ������ �۾� �߻��ϴ� ��������.
//		=>	sum_of_gcd�� �ڷ����� long long ���� �����ϴ� ������ ���� �� �־���.

#include<iostream>
#include<vector>

using namespace std;

// ��Ŭ���� ȣ���� ���
int gcd(int a, int b) {

	int c = a % b;

	while (c > 0) {
		a = b;
		b = c;
		c = a % b;
	}

	return b;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	
	int num;
	long long sum_of_gcd = 0;
	int ele;

	cin >> t;

	vector<vector<int>> vec;

	for (int i = 0; i < t; i++) {
		cin >> num;
		vector<int> v;

		for (int j = 0; j < num; j++) {
			cin >> ele;
			v.push_back(ele);
		}
		vec.push_back(v);
		v.clear();
	}
	
	//cout << vec[0].size() << '\n';
	//cout << vec[1].size() << '\n';


	for (int i = 0; i < t; i++) {
		
		for (int j = 0; j < vec[i].size() - 1; j++) {
			for (int k = j + 1; k < vec[i].size(); k++) {
				sum_of_gcd += gcd(vec[i][j], vec[i][k]);
			}
		}
		cout << sum_of_gcd << '\n';
		sum_of_gcd = 0;
		
		
	}
	


	return 0;
}