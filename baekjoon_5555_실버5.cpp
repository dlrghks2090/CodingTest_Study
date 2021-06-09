// 백준_실버5
// 반지 문제

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

	// 각 문자열 idx 0부터 (str문자열의 길이-1) 만큼 복사해 각 문자열의 뒤에 추가해준다.
	for (int i = 0; i < N; i++) {

		arr[i].append(arr[i].substr(0,size_of_str-1));
	}

	/*
	for (int i = 0; i < N; i++) {
		cout << "수정한 문자열 " << i << " : " << arr[i] << endl;
	}
	*/

	for (int i = 0; i < N; i++) {
		n = arr[i].find(str);
		// npos 는 해당 문자열을 찾지 못했을 경우의 리턴값
		if (n != string::npos) {
			//cout << i << " 번째 문자열 시작 인덱스 : " << arr[i].find(str) << endl;
			++count;
		}
	}

	cout << count;

	


	return 0;
}