#include <iostream>
using namespace std;
void FindABC(char vect[10], char arr[10], int* cntA, int* cntB, int* cntC) {
	for (int i = 0; i < 10; i++) {
		if (vect[i] == 'A') *cntA += 1;
		else if (vect[i] == 'B') *cntB += 1;
		else if (vect[i] == 'C') *cntC += 1;

		if (arr[i] == 'A') *cntA += 1;
		else if (arr[i] == 'B') *cntB += 1;
		else if (arr[i] == 'C') *cntC += 1;
	}

}

int main() {
	char vect[10];
	char arr[10];
	cin >> vect >> arr;
	int cntA = 0, cntB = 0, cntC = 0;
	FindABC(vect, arr, &cntA, &cntB, &cntC);
	cout << "A:" << cntA << endl;
	cout << "B:" << cntB << endl;
	cout << "C:" << cntC;


	return 0;
}