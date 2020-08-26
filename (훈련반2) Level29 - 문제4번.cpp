#include <iostream>
#include <cstring>
using namespace std;

char value[20];
int len;

void run(int now)
{
	if (value[now] == '#' || now >= len) return;
	if (value[now] >= 'A' && value[now] <= 'Z')  cout << value[now];

	run(now * 2);
	run(now * 2 + 1);
}

int main()
{
	cin >> value;

	len = strlen(value);

	run(1);

	return 0;
}