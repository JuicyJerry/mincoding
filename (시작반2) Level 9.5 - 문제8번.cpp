#include <iostream>
using namespace std;
void BBQ(int inputNumber) {
	for (int i = 0; i < inputNumber; i++) cout << (i + 1);
}

void KFC(char inputNumber) {
	for (int i = 0; i < 7; i++) cout << inputNumber;
}

int main() {
	int input1;
	int input2;
	char input3;

	cin >> input1;
	if (input1 % 2 == 1) {
		cin >> input2;
		BBQ(input2);
	}
	else if (input1 % 2 == 0) {
		cin >> input3;
		KFC(input3);
	}

	return 0;
}