#include <iostream>
using namespace std;

int limitLevel;
int branch;

void run(int level)
{
	if (level == limitLevel) return;
	for (int i = 0; i < limitLevel; i++) {
		run(level + 1);
	}
}

int main()
{
	cin >> limitLevel >> branch;
	run(0);

	return 0;
}