// ����_�ڷᱸ��1_17413��_�ǹ�3_�ܾ� ������2 ����
// �������� Ǫ�� ����� ������ ���� string�� Ư������ ����Ͽ� ������ Ǯ����.

#include<iostream>
#include<string>
using namespace std;


// ���ڿ� ���� �ܾ���� ������ ���� ��ġ
void reverse(string& str, int start, int end, int count) {
	char tmp;
	int k = 0;
	for (int i = start; i < start + count / 2; i++) {
		tmp = str[i];
		str[i] = str[end - k];
		str[end - k] = tmp;
		++k;
		tmp = NULL;
	}

}

int main() {

	string str;
	int tag = 0; // �±� üũ
	
	int count = 0;
	int start;
	int end;


	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {

		// ��ȣ�� �����ϱ� ���� ��ġ�� tag�� ����Ͽ���.
		if (tag == 0) {
			if (str[i] == '<') {
				if (count != 0) {
					end = i - 1;
					// ��ȣ�� �����ϱ������� ���ڿ��� �־��ٸ� �����´�.
					reverse(str, start, end, count);
					count = 0;
				}
				tag = 1;
			}
			// ������ ���ö� ���������� ���ڿ��� �����ߴٸ� �����´�.
			else if (str[i] == ' ') {
				end = i - 1;
				reverse(str, start, end, count);
				count = 0;
			}
			else {
				if (count == 0) {
					start = i;
				}
				++count;
				// �������� �������� count !=0 �̸� ���ڿ��� �����´�.
				if (i == str.size() - 1) {
					if (count != 0) {
						end = i;
						reverse(str, start, end, count);
					}
				}
			}

		}
		else {
			if (str[i] == '>') {
				tag = 0;
			}
		}
	}

	cout << str;



	return 0;
}