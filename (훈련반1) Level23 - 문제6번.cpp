#include <iostream>
using namespace std;
char path[10];
char card[6];
int cnt;
void run(int level)
{
	if (level >= 1 && path[level] - path[level - 1] > 3) return;
	// if (level >= 1 && path[level - 1] - path[level] > 3) return;
	// if (level >= 1 && path[level - 2] - path[level - 1] > 3) return;

	if (level == 4)
	{
		cnt++;
		cout << path << endl;
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		path[level] = card[i];
		run(level + 1);
		path[level] = 0;
	}
}

int main()
{
	cin >> card;
	run(0);
	cout << cnt;
	return 0;
}