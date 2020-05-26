#include <iostream>
using namespace std;
int main() {
	int vect[6] = { 3, 4, 2, 5, 7, 9 };
	int index1, index2;
	int temp;
	cin >> index1 >> index2;

	temp = vect[index1];
	vect[index1] = vect[index2];
	vect[index2] = temp;

	for (int i = 0; i < 6; i++) {
		cout << vect[i] << " ";
	}


	return 0;
}