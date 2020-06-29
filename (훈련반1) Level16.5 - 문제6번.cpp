#include <iostream>
using namespace std;
void findIndex(char vect[10], int* len) {
	int max = 0;
	int min = 9999;
	int max_di, min_di;
	for (int i = 0; i < *len; i++) {
		if (vect[i] > max) {
			max = vect[i];
			max_di = i;
		}
	}
	for (int i = 0; i < *len; i++) {
		if (vect[i] < min) {
			min = vect[i];
			min_di = i;
		}
	}

	cout << max_di << endl << min_di;
}

int main() {
	char vect[10];
	cin >> vect;
	int len = 0;
	for (int i = 0; i < 10; i++) {
		if (vect[i] == '\0') {
			len = i;
			break;
		}
	}

	findIndex(vect, &len);


	return 0;
}