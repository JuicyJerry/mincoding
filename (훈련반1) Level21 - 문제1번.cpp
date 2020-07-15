#include <iostream>
using namespace std;

void bbq(int level)
{
	if (level == 2) return;
	/*bbq(level + 1);
	bbq(level + 1);
	bbq(level + 1);*/

	for (int i = 0; i < 3; i++) {
		bbq(level + 1);
	}

	int debug = 0;

}

int main()
{
	bbq(0);

	return 0;
}