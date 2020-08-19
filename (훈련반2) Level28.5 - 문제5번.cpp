#include <iostream>
using namespace std;
int main()
{
	int n, p, r;
	int vect[5];
	cin >> n;
	int q = 10000;
	if (n < 10000 || n >= 89999) return 0;
	for (int i = 0; i < 5; i++) {
		p = n / q;
		r = (p) % 10;
		vect[i] = r + 1;
		q /= 10;
	}
	int temp;
	int t = 4;
	for (int i = 0; i < 2; i++) {
		temp = vect[i];
		vect[i] = vect[t];
		vect[t] = temp;
		t--;
	}
	for (int i = 0; i < 5; i++) {
		cout << vect[i];
	}

	return 0;
}