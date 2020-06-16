#include <iostream>
using namespace std;
char vect[3][4] = { "DAS", "QWV", "RTY" };
void Find(int* y, int* x, int* y1, int* x1, char* chr, char* chr1) {
	*chr = vect[*y][*x];
	*chr1 = vect[*y1][*x1];

}


int main() {
	int y, x, y1, x1;
	cin >> y >> x >> y1 >> x1;
	char chr, chr1;
	Find(&y, &x, &y1, &x1, &chr, &chr1);
	cout << chr << " " << chr1;

	return 0;
}