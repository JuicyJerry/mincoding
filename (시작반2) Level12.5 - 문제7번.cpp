#include <iostream>
using namespace std;
int findLen(char vect[100]) {
	for (int i = 0; i < 100; i++) {
		if (vect[i] == 0) {
			return i;
			break;
		}
	}
}
int main() {
	char vect1[100] = { 0 };
	int len1;
	char vect2[100] = { 0 };
	int len2;
	char vect3[100] = { 0 };
	int len3;

	cin >> vect1 >> vect2 >> vect3;
	int len1vect = findLen(vect1);
	int len2vect = findLen(vect2);
	int len3vect = findLen(vect3);

	if (len1vect >= len2vect && len1vect >= len3vect) cout << vect1;
	else if (len2vect >= len3vect && len2vect >= len1vect) cout << vect2;
	else cout << vect3;

	return 0;
}