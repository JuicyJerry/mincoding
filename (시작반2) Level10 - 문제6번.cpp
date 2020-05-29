#include <iostream>
using namespace std;
int even(int value) {

	return value * 2;
}

int odd(int value) {

	return value - 10;
}

int printData(int value) {

	return value;
}

int main() {
	int a, b;
	cin >> a >> b;
	int evenNum = even(a / b);
	int oddNum = odd(a / b);

	if (a % b == 0) cout << evenNum << endl;
	else if (a % b == 1) cout << oddNum << endl;

	int run2 = printData(a + b);
	cout << run2;

	return 0;
}