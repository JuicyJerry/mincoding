#include <iostream>
using namespace std;
int main()
{
	int input;
	cin >> input;

	int i = 0;
	int num = 0;
	while (i < 6)
	{
		int sum = 0;
		sum = input % 10;
		input /= 10;
		if (i == 1) num = (num + sum);
		if (i == 3) num = num + (sum * 10);
		i++;
	}

	cout << num + 5;
	return 0;
}