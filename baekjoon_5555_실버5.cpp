// ����_�ǹ�5
// ���� ����

#include<iostream>
#include<string>

using namespace std;


int main() {

	string str;
	string* arr;
	string::size_type n;
	int N;
	int count = 0;
	int size_of_str;

	cin >> str >> N;

	arr = new string[N];
	size_of_str = str.size();

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	// �� ���ڿ� idx 0���� (str���ڿ��� ����-1) ��ŭ ������ �� ���ڿ��� �ڿ� �߰����ش�.
	for (int i = 0; i < N; i++) {

		arr[i].append(arr[i].substr(0,size_of_str-1));
	}

	/*
	for (int i = 0; i < N; i++) {
		cout << "������ ���ڿ� " << i << " : " << arr[i] << endl;
	}
	*/

	for (int i = 0; i < N; i++) {
		n = arr[i].find(str);
		// npos �� �ش� ���ڿ��� ã�� ������ ����� ���ϰ�
		if (n != string::npos) {
			//cout << i << " ��° ���ڿ� ���� �ε��� : " << arr[i].find(str) << endl;
			++count;
		}
	}

	cout << count;

	


	return 0;
}