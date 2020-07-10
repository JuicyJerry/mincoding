#include <iostream>
using namespace std;

int main() {
	int G;
	cin >> G;
	int* k = &G;
	int* p = &G;
	int** t = &p;
	int** Q = &k;


	cout << **t << " " << *k;

	return 0;
}


