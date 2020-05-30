#include <iostream>
using namespace std;

int sum(int a, int b) {
	return a + b;
}

int comp(int a, int b) {
	return a - b;
}

void print(int t1, int t2) {
	cout << "ÇÕ:" << t1 << endl;
	cout << "Â÷:" << t2 << endl;
}

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	print(sum(num1, num2), comp(num1, num2));


	return 0;
}