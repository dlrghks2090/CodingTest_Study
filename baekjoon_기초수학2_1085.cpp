// ���� ���ʼ���2_1085��
// ���簢������ Ż�� ����
// (x,y) : ������ġ
// (w,h) : ���簢���� ������ �� ������ 
// (0,0) : ���簢���� ���� �Ʒ� ������
// ���簢���� ��輱���� ���� �Ÿ��� �ּڰ��� ���ϴ� ���α׷��� �ۼ��϶�.

#include <iostream>

using namespace std;


int main() {

	int x, y, w, h;
	int min = 0;

	cin >> x >> y >> w >> h;

	min = w - x;

	if (min > x)
		min = x;
	if (min > y)
		min = y;
	if (min > h - y)
		min = h - y;

	cout << min;


	return 0;
}