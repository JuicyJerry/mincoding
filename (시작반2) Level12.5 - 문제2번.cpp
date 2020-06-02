#include <iostream>
using namespace std;
int main() {
	int a, b;
	char c, d;
	cin >> a >> b >> c >> d;

	int* P1 = &a;
	int* P2 = &b;
	char* P3 = &c;
	char* P4 = &d;

	for (int i = 0; i < *P1; i++) {
		cout << *P3;
	}

	cout << endl;

	for (int i = 0; i < *P2; i++) {
		cout << *P4;
	}



	return 0;
}