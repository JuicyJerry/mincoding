#include <iostream>
using namespace std;
void getSum(int vect[11], int index) {
	int sum = 0;
	for (int i = index; i < index + 5; i++) {
		sum += vect[i];
	}
	cout << sum;
}
int main() {
	int vect[11] = { 3, 4, 1, 1, 2, 6, 8, 7, 8, 9, 10 };
	int index;
	cin >> index;
	getSum(vect, index);

	return 0;
}