#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char vect[9];
	cin >> vect;
	int dat[100] = { 0 };

	for (int i = 0; i < 8; i++) {
		dat[vect[i]]++;
	}

	int idx = 0;
	for (int i = 65; i < 100; i++) {
		if (dat[idx] < dat[i]) idx = i;
	}
	cout << (char)(idx);

	return 0;

}