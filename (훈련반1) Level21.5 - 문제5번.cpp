#include <iostream>
using namespace std;
int main()
{
	int vect[8];
	int bucket[10] = { 0 };

	for (int i = 0; i < 8; i++)
	{
		cin >> vect[i];

		bucket[vect[i]]++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (bucket[i] == 0) continue;
		if (bucket[i] > 0)
		{
			for (int j = 0; j < bucket[i]; j++)
			{
				cout << i << " ";
			}
		}
	}

	return 0;
}