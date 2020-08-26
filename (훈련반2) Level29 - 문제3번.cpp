#include <iostream>
using namespace std;

// 숫자 8개 입력
int value[8];
int path[10];

void run(int now)
{
	path[now] = value[now];
	if (now >= 8 || value[now] == 0) return;
	if (now % 2 == 0) {
		for (int i = 1; i <= now; i++) {
			if (path[i] == 0) continue;
			cout << path[i] << " ";
		}
		cout << endl;
	}

	run(now * 2);
	path[now] = 0;
	run(now * 2 + 1);
	path[now] = 0;
}

int main()
{
	for (int i = 0; i < 8; i++) {
		cin >> value[i];
	}

	path[0] = 0;

	run(1);

	return 0;
}