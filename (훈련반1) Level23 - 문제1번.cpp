#include <iostream>
using namespace std;
char name[5];
char path[4];

void run(int level)
{
	if (level >= 2 && path[level - 2] == path[level - 1]) return;
	if (level >= 3 && path[level - 3] == path[level - 1]) return;

	if (level == 3)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; i++) {
		path[level] = name[i];
		run(level + 1);
		path[level] = 0;
	}

}

int main()
{
	cin >> name;
	run(0);
	return 0;
}