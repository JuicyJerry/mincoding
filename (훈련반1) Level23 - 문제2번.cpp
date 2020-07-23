#include <iostream>
using namespace std;
char name[5];
char path[10];
int cnt = 0;

void run(int level)
{
	if (level >= 2 && (path[level - 2] == 'B' && path[level - 1] == 'T')) return;
	if (level >= 2 && (path[level - 2] == 'T' && path[level - 1] == 'B')) return;

	if (level == 4)
	{
		cnt++;
		//cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		path[level] = name[i];
		run(level + 1);
		path[level] = 0;
	}
}

int main()
{
	cin >> name;
	run(0);
	cout << cnt;
	return 0;
}