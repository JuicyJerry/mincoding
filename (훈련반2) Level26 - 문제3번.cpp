#include <iostream>
using namespace std;

int n;
char path[10];
char name[10] = "ABCD";
int via[10];

void run(int level)
{
	if (level == n)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (via[i] == 0)
		{
			path[level] = name[i];
			via[i] = 1;
			run(level + 1);
			via[i] = 0;
			path[level] = 0;
		}
	}
}


int main()
{
	cin >> n;
	run(0);

	return 0;
}