#include <iostream>
using namespace std;
int main()
{
	int coin[4] = { 35, 17, 7, 1 };
	int result[4];
	int input;
	cin >> input;

	for (int i = 0; i < 4; i++)
	{
		result[i] = input / coin[i];
		input = input % coin[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cout << coin[i] << ":" << result[i] << "°³\n";
	}
	return 0;
}