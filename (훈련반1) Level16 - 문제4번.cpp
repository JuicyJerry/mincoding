#include <iostream>
using namespace std;
void getResult(int A[4], int B[4], int result[4]) {
	int t = 3;
	for (int i = 0; i < 4; i++) {
		result[i] = A[i] + B[t];
		t--;
	}

}

int main() {
	int A[4];
	int B[4];
	int result[4];
	for (int i = 0; i < 4; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> B[i];
	}

	getResult(A, B, result);

	for (int i = 0; i < 4; i++) {
		cout << result[i] << " ";
	}

	return 0;
}