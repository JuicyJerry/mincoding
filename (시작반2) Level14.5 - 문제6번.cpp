#include <iostream>
using namespace std;
void output(int vect[3][3]) {
	cout << vect;

}

void magic(int vect[3][3]) {
	int t = 1;
	for (int j = 0; j < 3; j++) {
		for (int i = j; i < 3; i++) {
			vect[j][i] = t;
			t++;
		}
	}

	output(vect);

}

int main() {
	int vect[3][3] = { 0 };
	int arr[3] = { 0 };
	magic(vect);

	return 0;
}