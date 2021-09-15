#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int num;
	int* factor;

	cin >> num;
	factor = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> factor[i];
	}
	sort(factor, factor + num);

	cout << factor[0] * factor[num - 1];

	delete[] factor;

	return 0;
}