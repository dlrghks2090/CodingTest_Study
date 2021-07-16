#include<iostream>
#include<string>

using namespace std;


int main() {

	string str;
	int steal = 0;
	int total = 0;
	

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {	// 왼쪽 괄호일때, 쇠막대기의 개수 +1
			++steal;
		}
		else if (str[i] == ')' && i != 0) {	// 오른쪽 괄호일때,
			if (str[i - 1] == '(') {	// 이 전 괄호가 왼쪽 괄호일때,
				if (steal != 1){	// steal !=1 이면 steal 한개와 오른쪽괄호가 레이저가 되면서 나머지 쇠를 잘라낸다.
					--steal;
					total = total + steal;	// 잘라낸 왼쪽 쇠막대기만큼 총량에 추가시켜준다.
				}
				else {	// steal == 1 이면 레이저가 생기면서 steal == 0 이 된다.
					--steal;
				}
			}
			else {
				total += 1;	// 쇠막대기의 남은 끝부분의 개수를 세어주면서
				--steal;	// 쇠막대기의 개수를 -1 해준다.
			}
		}
	}

	cout << total;

	return 0;
}