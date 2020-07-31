#include <iostream>
using namespace std;

char vect[6];

void run(int level)
{
	if (level == 5)
	{
		cout << endl;
		return;
	}

	cout << (char)(vect[level]);
	run(level + 1);
	cout << (char)(vect[level]);
}

int main()
{
	cin >> vect;
	run(0);

	return 0;
}