#include <iostream>
using namespace std;


int printData(int value) {
	return value;
}

int even(int value) {
	int ret = printData(value * 2);
	return ret;
}

int odd(int value) {
	int ret = printData(value - 10);
	return ret;
}

int main() {
	int a, b;
	cin >> a >> b;
	if ((a / b) % 2 == 0) cout << printData(even(a / b)) << endl;
	else cout << printData(odd(a / b)) << endl;

	int ret = printData(a + b);
	cout << ret;

	return 0;
}