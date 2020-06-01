#include <iostream>
using namespace std;
int main() {
	char vect[10] = "DATAPOWER";
	int a, b;
	cin >> a >> b;
	char arr[10] = { 0 };
	int t = 0;

	for (int i = a; i <= b; i++) {
		arr[t] = vect[i];
		t++;
	}

	cout << arr;

	return 0;
}