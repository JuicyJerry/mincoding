#include <iostream>
using namespace std;

char aToZ() {
	char chr;
	cin >> chr;
	if (chr - 'A' > 'Z' - chr) return 'Z';

	return 'A';

}

int main() {
	cout << aToZ();

	return 0;
}