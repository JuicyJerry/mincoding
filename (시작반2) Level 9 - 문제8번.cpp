#include <iostream>
using namespace std;
int a, b;
int sum, subtraction, multiplication, division;

void BBQ() {
	sum = a + b;
	subtraction = a - b;
	multiplication = a * b;
	division = a / b;

	cout << "ÇÕ:" << sum << "\n"
		<< "Â÷:" << subtraction << "\n"
		<< "°ö:" << multiplication << "\n"
		<< "¸ò:" << division << "\n";

}

int main() {
	cin >> a >> b;
	BBQ();

	return 0;
}