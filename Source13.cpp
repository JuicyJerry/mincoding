#include <iostream>
using namespace std;
int main() {
	char vect[5];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> vect[i];
	}

	for (int i = 0; i < n; i++) {
		cout << (char)(vect[i]);
	}

	return 0;
}