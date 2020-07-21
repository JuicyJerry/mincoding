#include <iostream>
using namespace std;
char path[5];
char name[5] = "ABCD";
char input[4] = { '\0' };
int index = 0;
int flag = 0;

void run(int level)
{
	if (level == 3)
	{
		index++;
		for (int i = 0; i < 4; i++)
		{
			if (path[i] != input[i]) {
				flag = 0;
				break;
			}
			else flag = 1;
		}
		if (flag == 1) cout << index << "¹øÂ°";
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		path[level] = name[i];
		run(level + 1);
		if (flag == 1) break;
		path[level] = 0;
	}


}

int main()
{
	cin >> input;
	run(0);
	return 0;
}