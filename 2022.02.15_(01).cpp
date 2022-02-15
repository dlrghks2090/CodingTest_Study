#include<iostream>

using namespace std;

int main()
{
	int arr[3] = { 0, };
	int count = 1;
	int result = 0;

	cin >> arr[0] >> arr[1] >> arr[2];

	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (arr[i] == arr[j])
				++count;
		}
		if (count == 3)
		{
			result = 10000 + arr[0] * 1000;
			cout << result << '\n';
			return 0;
		}
		if (count == 2)
		{
			result = 1000 + arr[i] * 100;
			cout << result << '\n';
			return 0;
		}
	}

	result = arr[0];
	for (int i = 1; i < 3; i++) {
		if (result < arr[i])
			result = arr[i];
	}
	result = result * 100;

	cout << result << '\n';
	
	return 0;
}