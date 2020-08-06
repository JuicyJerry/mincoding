#include <iostream>
using namespace std;

int n;
int path[10];
int name[6] = { 1, 2, 3, 4, 5, 6 };

void run(int level)
{
	if (level == n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << path[i];
		}
		cout << endl;
		return;
	}

	for (int i = 0; i < 6; i++)
	{
		path[level] = name[i];
		run(level + 1);
		path[level] = 0;
	}
}

int main()
{
	cin >> n;
	run(0);
	return 0;
}