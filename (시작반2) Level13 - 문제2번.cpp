#include <iostream>
using namespace std;
void moom(int* age, int* a, int* b, int* c) {
	*a = *age - 4;
	*b = *age + 3;
	*c = *age * 2;
}

int main() {
	int age, a, b, c;
	cin >> age;
	moom(&age, &a, &b, &c);
	cout << a << " " << b << " " << c;


	return 0;
}