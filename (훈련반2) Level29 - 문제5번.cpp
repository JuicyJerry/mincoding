#include <iostream>
using namespace std;

int num[8];
int sum = 0;

void run(int now, int level)
{
	if (now >= 8 || num[now] == 0) return;

	if (level == 2) {
		sum += num[now];
	}

	run(now * 2, level + 1);
	run(now * 2 + 1, level + 1);
}


int main()
{
	for (int i = 1; i < 8; i++) {
		cin >> num[i];
	}

	run(1, 0);
	cout << sum;

	return 0;
}