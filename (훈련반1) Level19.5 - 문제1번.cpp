#include <iostream>
using namespace std;

void BBQ(int* a, int* b)
{
	int vect[5];
	int max = 0;
	int min = 9999;
	for (int y = 0; y < 5; y++) {
		cin >> vect[y];
		if (vect[y] > max) max = vect[y];
		if (vect[y] < min) min = vect[y];
	}
	*a = max;
	*b = min;
	//max & *a;
	//min & *b;
}

int main() {
	int a, b;
	BBQ(&a, &b);

	cout << "a=" << a << endl;
	cout << "b=" << b;

	return 0;
}