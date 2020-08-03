#include <iostream>
using namespace std;
int main()
{
	char str[8];
	cin >> str;

	int data[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> data[i];
	}


	int* ptrs[4];
	ptrs[0] = &data[0];
	ptrs[1] = &data[1];
	ptrs[2] = &data[2];
	ptrs[3] = &data[3];

	for (int i = 0; i < 4; i++)
	{
		cout << str[*ptrs[i]];
	}

	return 0;
}