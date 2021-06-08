// ���� ���Ʈ ����_7568��_<�ǹ�5>
// ��ġ ����
// ������� �����Կ� Ű�� ������ �־�����.
// �� ��, �����Կ� Ű�� �Ѵ� ��뺸�� ũ�� "ū ��ġ" ��� �Ѵ�.
// ��� �� ��ġ�� ������ ����϶�.

#include <iostream>

using namespace std;

int main() {

	int N;

	int* w;  // ����� �����Ը� �����ϴ� �����迭
	int* h;  // ����� Ű�� �����ϴ� �����迭
	int* grade;  // ��ġ�� ������ �����ϴ� �����迭

	cin >> N;

	w = new int[N];
	h = new int[N];

	grade = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> w[i] >> h[i];
	}

	// �����Կ� Ű�� �Ѵ� �񱳴�󺸴� ���� ��, ����� 1��ŭ ������. 
	for (int i = 0; i < N; i++) {
		grade[i] = 1;
		for (int j = 0; j < N; j++) {
			if (i == j)
				continue;
			if (w[i] < w[j] && h[i] < h[j]) {
				++grade[i];
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << grade[i] << " ";
	}


	delete[] w;
	delete[] h;
	delete[] grade;

	return 0;
}