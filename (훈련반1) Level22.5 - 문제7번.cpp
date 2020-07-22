#include <iostream>
using namespace std;
int main()
{
	char vect[4][5][4] = { {{"010"}, {"101"}, {"111"}, {"101"}, {"101"}}, {{"111"}, {"101"}, {"111"}, {"101"}, {"111"}}, {{"111"}, {"101"}, {"100"}, {"101"}, {"111"}}, {{"110"}, {"101"}, {"101"}, {"101"}, {"110"}} };
	int input;
	cin >> input;

	for (int z = input; z < input + 1; z++) {
		for (int y = 0; y < 5; y++) {
			for (int x = 0; x < 3; x++) {
				if (vect[z][y][x] == '0') cout << " ";
				else cout << '#';
			}
			cout << endl;
		}
	}

	return 0;
}