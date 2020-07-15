#include <iostream>
using namespace std;
int main()
{
	char vect[3][11];
	cin >> vect[0][11];
	cin >> vect[1][11];
	cin >> vect[2][11];

	int v1 = strlen(vect[0]);
	int v2 = strlen(vect[1]);
	int v3 = strlen(vect[2]);

	/*char temp1[v2];
	char temp2[v3];
	if (v2 > v1 && v2 > v3) {
		strcpy(temp1[v2], vect[1][v2]);
		strcpy(vect[1][v2], vect[0][v1]);
		strcpy(vect[0][v1], temp1[v2]);
	}
	else if (v3 > v1 && v3 > v2) {
		strcpy(temp2[v3], vect[2][v3]);
		strcpy(vect[2][v3], vect[0][v1]);
		strcpy(vect[0][v1], temp2[v3]);
	}

	cout << vect;*/


	return 0;
}