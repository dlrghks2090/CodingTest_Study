// 백준 기초수학2_4153번
// 직각삼각형 문제
// 주어진 세변의 길이로 삼각형이 직각인지 아닌지 구분하라.
// 입력은 여러개의 테스트케이스로 주어지며 마지막줄에는 0 0 0dl dlqfurehlsek.
// 각 변은 30000 보다 작은 양의 정수로 주어진다.

#include <iostream>
#include <vector>

using namespace std;

int main() {

	// 배열의 주소를 벡터에 추가시킬 때, 하나의 배열로 계속 입력하려면 동적 메모리를 할당하는 배열을 사용해야한다. ->  new사용
	vector<int*> v;
	long long int max = 0;
	long long int b1 = 0;
	long long int b2 = 0;
	int* arr;

	while (1) {
		arr = new int[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		if (arr[0] == 0 || arr[1] == 0 || arr[2] == 0)
			break;
		v.push_back(arr);
		
	}

	for (int i = 0; i < v.size(); i++) {
		max = v[i][0];
		if (max < (v[i])[1]) {
			b1 = (v[i])[0];
			max = (v[i])[1];
			if (max < (v[i])[2]) {
				max = (v[i])[2];
				b2 = (v[i])[1];
			}
			else
				b2 = (v[i])[2];

		}
		else if(max < (v[i])[2]){
			max = (v[i])[2];
			b1 = (v[i])[0];
			b2 = (v[i])[1];
		}
		else {
			b1 = (v[i])[1];
			b2 = (v[i])[2];
		}
		max = max * max;
		b1 = b1 * b1;
		b2 = b2 * b2;

		if (max == b1 +  b2)
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
		max = 0;
		b1 = 0;
		b2 = 0;
	}


	delete[] arr;

	return 0;
}