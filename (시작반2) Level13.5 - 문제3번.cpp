#include <iostream>
using namespace std;
int main() {
	int vectA[5];
	int vectB[5];
	int vectC[5];
	for (int i = 0; i < 5; i++) {
		cin >> vectA[i];
	}

	for (int i = 0; i < 5; i++) {
		cin >> vectB[i];
	}

	for (int i = 0; i < 5; i++) {
		cin >> vectC[i];
	}

	int vectD[5];
	for (int i = 0; i < 5; i++) {
		vectD[i] = (vectA[i] * vectB[i]) + vectC[i];

	}
	for (int i = 0; i < 5; i++) {
		cout << vectD[i] << " ";
	}


	return 0;
}