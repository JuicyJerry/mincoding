#include <iostream>
using namespace std;
int main() {
	int arr[6];
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}
	int min = 999;
	int min_dy = 0;
	int masking[6] = { 1, 0, 1, 0, 1, 0 };
	for (int i = 0; i < 6; i++) {
		if (masking[i] == 1) {
			if (arr[i] < min) {
				min = arr[i];
				min_dy = i;
			}
		}
	}

	cout << "arr[" << min_dy << "]=" << min;

	return 0;
}