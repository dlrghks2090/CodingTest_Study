// ���� ���ʼ���2_4153��
// �����ﰢ�� ����
// �־��� ������ ���̷� �ﰢ���� �������� �ƴ��� �����϶�.
// �Է��� �������� �׽�Ʈ���̽��� �־����� �������ٿ��� 0 0 0dl dlqfurehlsek.
// �� ���� 30000 ���� ���� ���� ������ �־�����.

#include <iostream>
#include <vector>

using namespace std;

int main() {

	// �迭�� �ּҸ� ���Ϳ� �߰���ų ��, �ϳ��� �迭�� ��� �Է��Ϸ��� ���� �޸𸮸� �Ҵ��ϴ� �迭�� ����ؾ��Ѵ�. ->  new���
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