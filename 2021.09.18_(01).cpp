
// compare �Լ��� sort�Լ��� ������ ���� �� �ڼ��� ������ �� �ִ� ��������.
// sort�Լ��� ���̰� ���� ���ڿ��� ���������� ���� Ǯ �� �ִٴ� ����� �˾Ҵ�.


#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;



bool compare(string a, string b) {

	// sort�Լ����� ���ĺ����� �ܾ� �񱳰� �����ϴ�.
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.size() < b.size();
	
}

int main() {

	int N;
	string str;
	vector<string> s;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;
		
		// find(first ����, last �� ����, ã�� ����)
		// ���� find�Լ����� ã�� ���Ұ� ������ �װ��� ����Ű�� �ݺ��ڸ� ����
		// ���� ��ġ�ϴ� ���Ұ� ���ٸ� last�� �����Ѵ�.
		// ����, string�� find�Լ��� �ٸ���.
		if (find(s.begin(), s.end(), str) == s.end()) {
			s.push_back(str);
		}
	}

	sort(s.begin(), s.end(), compare );

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << '\n';
	}
	return 0;
}