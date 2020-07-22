#include <iostream>
using namespace std;
char name[5];
char path[4];

void run(int level)
{
	if (level == 3)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; i++) {
		path[level] = name[i];
		if (level >= 1 && path[level] == path[level - 1] || path[level] == path[level - 2]) continue;
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