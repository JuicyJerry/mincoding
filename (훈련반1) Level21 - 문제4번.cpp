#include <iostream>
using namespace std;
int limitLevel;

void run(int level)
{
	cout << level;
	if (level == limitLevel) return;
	for (int i = 0; i < 2; i++) {
		run(level + 1);
	}

	int debug = 0;

}

int main()
{
	cin >> limitLevel;
	run(0);
	return 0;
}