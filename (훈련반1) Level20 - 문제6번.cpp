#include <iostream>
using namespace std;
int a, b;

void abc(int level)
{
	cout << level << " ";
	if (level == b) {
		return;
	}
	abc(level + 1);
	cout << level << " ";
}

int main() {
	cin >> a >> b;
	abc(a);

	return 0;
}