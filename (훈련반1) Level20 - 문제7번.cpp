#include <iostream>
using namespace std;
int index;
int vect[8] = { 3, 7, 4, 1, 9, 4, 6, 2 };

void abc(int level)
{
	cout << vect[level] << " ";
	if (level == 0) {
		return;
	}
	abc(level - 1);
	cout << vect[level] << " ";
}

int main() {
	cin >> index;
	abc(index);

	return 0;
}