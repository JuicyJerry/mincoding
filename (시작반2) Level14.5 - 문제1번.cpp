#include <iostream>
using namespace std;
int main() {
	char chr, chr1;
	cin >> chr >> chr1;
	char* x = &chr;
	char* y = &chr1;

	char temp;
	temp = *x;
	*x = *y;
	*y = temp;

	cout << *x << " " << *y;

	return 0;
}