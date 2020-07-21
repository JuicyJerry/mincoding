#include <iostream>
using namespace std;
int n;
char path[5];

void run(int level)
{
	if (level == 4) {
		cout << path << endl;
		return;
	}

	for (int i = 1; i <= n; i++) {
		path[level] = '0' + i;
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