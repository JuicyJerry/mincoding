#include <iostream>
#include <cstring>
using namespace std;

char vect[2][2][4] = { {{"ATB"}, {"CCB"}}, {{"AAA"}, {"BBC"}} };
char input[10];

int main()
{
	cin >> input;
	int flag = 0;
	int t = 0;
	for (int z = 0; z < 2; z++) {
		for (int y = 0; y < 2; y++) {
			for (int t = 0; t < 3; t++) {
				if (strcmp(vect[z][y][t], input[t]) == 0) {
					flag = 1;
					break;
				}
			}

		}
	}

	if (flag == 1) cout << "발견";
	else cout << "미발견";

	return 0;
}