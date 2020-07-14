#include <iostream>
using namespace std;
char vect[6];

void abc(int level)
{
	cout << vect[level];
	if (level == 5) {
		cout << '\n';
		return;
	}
	abc(level + 1);
	cout << vect[level];
}

int main() {
	cin >> vect;
	abc(0);

	return 0;
}