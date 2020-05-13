#include <iostream>
using namespace std;
int main() {
	char vect[6] = { '#', '_', '#', '_', '#', '#' };
	for (int i = 0; i < 6; i++) {
		if (vect[i] == '#') {
			cout << "¼¥";
		}
		else {
			cout << "¹«";
		}
	}
	return 0;
}