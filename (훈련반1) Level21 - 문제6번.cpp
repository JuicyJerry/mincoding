#include <iostream>
using namespace std;

int branch, level;
int cnt = 0;

void run(int t)
{
	cnt++;
	if (t == level) return;
	for (int i = 0; i < branch; i++) {
		run(t + 1);
	}
}

int main()
{
	cin >> branch >> level;
	run(0);
	cout << cnt;

	return 0;
}