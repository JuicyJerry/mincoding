#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	char vect[10];
	cin >> vect;
	int len = strlen(vect);
	char container[90] = { '\0' };
	int cnt = 0;

	for (int i = 0; i < len; i++)
	{
		if (vect[i] >= 'A' && vect[i] <= 'Z')
		{
			container[vect[i]]++;
		}
	}
	int len1 = strlen(container);
	for (int i = 0; i < 90; i++)
	{
		if (container[i] > 0)
		{
			cnt++;
		}
	}

	cout << cnt << "Á¾·ù";

	return 0;
}