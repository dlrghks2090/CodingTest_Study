#include<iostream>
#include<string>
#include<vector>

using namespace std;


// �ܾ���� ������ ���� �Լ�
void reverse(string& a, int start, int end, int count) {

	char tmp;
	int k = 0;

	if (count == 1)
		return;

	for (int i = start; i < start + count / 2; i++) {
		tmp = a[i];
		a[i] = a[end - k];
		a[end - k] = tmp;
		++k;
	}


}

int main() {

	int T;
	int count = 0;
	int start = 0;
	int end = 0;
	string str;
	vector<string> v;
	string s;

	cin >> T;


	// cin���� ���ڸ� �Է��ϴٰ� ���ڿ��� �Է��ϴϱ� �Է� ������ �߻��ߴ�.
	// cin.ignore() �� ����� �Է¹��۸� ��� ������ �ذ��ߴ�.
	cin.ignore();
	for (int i = 0; i < T; i++) {
		getline(cin,str);
		v.push_back(str);
	}
	
	

	for (int i = 0; i < T; i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if (v[i][j] != ' ') {
				++count;

				// ������ �ܾ ���������� �ڵ�
				if (j == v[i].size() - 1) {
					end = j;
					reverse(v[i], start, end, count);
				}
			}
			else {
				end = j-1;

				reverse(v[i], start, end, count);

				start = j + 1;
				count = 0;
			}
		}
		start = 0;
		end = 0;
		count = 0;
	}

	for (int i = 0; i < T; i++) {
		cout << v[i] << '\n';
	}


	return 0;
}