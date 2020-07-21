#include <iostream>
using namespace std;
int n;
char name[5] = "BGTK";
char path[5];

void run(int level)
{
	if (level == n) {
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
	cin >> n;
	run(0);

	return 0;
}