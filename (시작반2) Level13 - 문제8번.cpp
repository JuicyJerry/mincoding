#include <iostream>
using namespace std;
int CompareGo(int vect[5], int arr[5]) {
	for (int i = 0; i < 5; i++) {
		if (vect[i] != arr[i])	return 1;
	}
	return 0;
}

int main() {
	int vect[5] = { 3, 5, 1, 2, 7 };
	int arr[5];
	for (int i = 0; i < 5; i++) cin >> arr[i];

	int ret = CompareGo(vect, arr);
	if (ret == 1) cout << "�ι迭����������";
	else cout << "�ι迭����������";

	return 0;
}