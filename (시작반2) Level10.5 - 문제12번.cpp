#include <iostream>
using namespace std;
int num;

int yesOrNo() {
	cin >> num;
	if (num % 3 == 0) return 7;
	else if (num % 3 == 1) return 35;
	else if (num % 3 == 2) return 50;
}

int main() {
	cout << yesOrNo();

	return 0;
}