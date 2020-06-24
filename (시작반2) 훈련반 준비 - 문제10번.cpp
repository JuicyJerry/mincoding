#include <iostream>
using namespace std;
int main() {
	char vect[3][6] =
	{
		"FRQWT",
		"GASYQ",
		"ASADB"
	};

	int n;
	cin >> n;

	for (int i = 0; i < 3; i++) {
		cout << vect[i][n];
	}

	return 0;
}