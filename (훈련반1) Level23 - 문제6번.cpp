#include <iostream>
using namespace std;
char vect[6];
char path[10];
int cnt = 0;


int abs(int x)
{
	if (x < 0) return -x;
	return x;
}

void run(int level)
{
	if (level >= 2 && (path[level - 1]) - (path[level - 2]) > 3) return;

	if (level == 4)
	{
		cnt++;
		//cout << path << endl;
		return;
	}

	for (int i = 0; i < 5; i++)
	{
		if (!(level > 0 && abs(path[level - 1] - vect[i]) > 3))
		{
			path[level] = vect[i];
			run(level + 1);
			path[level] = 0;
		}
	}

}

int main()
{
	cin >> vect;
	run(0);
	cout << cnt;

	return 0;
}