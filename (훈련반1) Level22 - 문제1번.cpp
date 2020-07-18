#include <iostream>
using namespace std;

char path[4];

void run(int level)
{
	if (level == 2) {
		cout << path << endl;
		return;
	}
	for (int i = 0; i < 3; i++) {
		path[level] = 'A' + i;
		run(level + 1);
		path[level] = 0;
	}
}

int main()
{
	run(0);

	return 0;
}