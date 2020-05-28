#include <iostream>
using namespace std;
int num;
char chr;

int one()
{
	cin >> num;

	return num;
}

char two()
{
	cin >> chr;
	return chr;
}

int main() {
	int ret1 = one();
	char ret2 = two();
	cout << ret1;
	cout << ret2;

	return 0;
}