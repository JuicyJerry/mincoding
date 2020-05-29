#include <iostream>
using namespace std;

char getChar() {
	char input1, input2;
	cin >> input1 >> input2;
	if (int(input1) > int(input2)) return input1;
	else return input2;
}

int main() {
	char chr = getChar();
	cout << chr;

	return 0;
}