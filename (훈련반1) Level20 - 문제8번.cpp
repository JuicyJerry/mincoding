#include <iostream>
using namespace std;
int input;

void abc(int level)
{
	if (level / 2 == 0) {
		cout << level << " ";
		return;
	}
	abc(level / 2);
	cout << level << " ";
}

int main() {
	cin >> input;
	abc(input);

	return 0;
}