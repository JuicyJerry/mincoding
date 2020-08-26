#include <iostream>
using namespace std;

int value[8] = { 0, 3, 4, 2, 4, 1, 0, 3 };

void run(int now)
{
	if (value[now] == 0 || now >= 8) return;
	cout << value[now] << " ";

	run(now * 2);
	run(now * 2 + 1);
}

int main() {
	int idx, idxNum;
	cin >> idx >> idxNum;

	value[idx] = idxNum;

	run(1);
	return 0;
}