#include <iostream>
using namespace std;
char name[4] = "ABC";
char path[10];
int n;
int cnt = 0;


void run(int level)
{
	if (level >= 3 && path[level - 2] == path[level - 3])
	{
		if (path[level - 1] == path[level - 2])	return;
	}

	if (level == 3 && path[level - 2] == path[level - 3])
	{
		if (path[level - 1] == path[level - 2])	return;
	}

	if (level == n)
	{
		cnt++;
		//cout << path << endl;
		return;
	}

	for (int i = 0; i < 3; i++)
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
	cout << cnt;

	return 0;
}