#include <iostream>
using namespace std;



int main() {
	char a, b, c;
	cin >> a >> b >> c;

	char* p = &a;
	char* j = &b;
	char* t = &c;
	(*p)++;
	(*j)++;
	(*t)++;
	cout << *p << " " << *j << " " << *t;

	return 0;
}