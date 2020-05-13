#include <iostream>
using namespace std;
char vect[17];
char x, y, z;

void input() {
	cin >> x >> y >> z;
	for (int i = 0; i <= 6; i++)	vect[i] = x;
	for (int i = 7; i <= 12; i++)	vect[i] = y;
	for (int i = 13; i <= 16; i++)	vect[i] = z;

	for (int i = 16; i >= 0; i--)	cout << vect[i];

}

int main() {
	input();

	return 0;
}