#include <iostream>
using namespace std;
char name[5];
char path[4];
int via[10];

void run(int level)
{
	if (level == 3)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (via[i] == 0) {
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
	cin >> name;
	run(0);
	return 0;
}