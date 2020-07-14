#include <iostream>
using namespace std;

void bbq(int x) {

	if (x == 4)
	{
		return;
	}
	bbq(x + 1);
}

int main() {
	bbq(0);

	return 0;
}