#include <iostream>
#include <cstring>
using namespace std;

char vect1[11];
char vect2[11];
char vect3[11];

int main()
{
	cin >> vect1 >> vect2 >> vect3;
	int v1 = strcmp(vect1, vect2);
	int v2 = strcmp(vect1, vect3);
	int v3 = strcmp(vect2, vect3);

	if (v1 == 0 && v2 == 0 && v3 == 0) cout << "WOW";
	else if (v1 != 0 && v2 != 0 && v3 != 0) cout << "BAD";
	else cout << "GOOD";

	return 0;
}