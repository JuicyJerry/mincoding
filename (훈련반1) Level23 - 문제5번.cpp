#include <iostream>
using namespace std;
// char boat[5];
char name[6] = "EWABC";
char path[10];
int via[10];
int viaIndex;
char input;

void run(int level)
{
	if (via[viaIndex] == 1) return;

	if (level == 4)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 5; i++)
	{

		if (via[i] == 0)
		{
			via[i] = 1;
			path[level] = name[i];
			run(level + 1);
			path[level] = 0;
			via[i] = 0;
		}
	}


}

int main()
{
	cin >> input;

	for (int j = 0; j < 5; j++)
	{
		if (name[j] == input)
		{
			viaIndex = j;
			break;
		}
	}

	run(0);
	return 0;
}