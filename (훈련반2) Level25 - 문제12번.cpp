#include <iostream>
using namespace std;
int main()
{
	char num[15];
	char result0[15] = { '\0' }, result1[15] = { '\0' }, result2[15] = { '\0' };
	int t = 0;
	int j = 0;
	int p = 0;
	cin >> num;
	for (int i = 0; i < 15; i++)
	{
		if (i < 5)
		{
			result0[t] = num[i];
			t++;
		}
		else if (i < 10)
		{
			result1[j] = num[i];
			j++;
		}
		else if (i < 15)
		{
			result2[p] = num[i];
			p++;
		}
	}
	cout << result0;
	cout << endl;
	cout << result1;
	cout << endl;
	cout << result2;
	cout << endl;

	return 0;
}