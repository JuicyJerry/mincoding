#include <iostream> 
#include <cstring>
using namespace std;

int direct[4][2] =
{
	-1, 0,
	1, 0,
	0, -1,
	0, 1
};

char commandInfo[5][6] = { "up", "down", "left", "right", "right" };

int main()
{
	int y = 5;
	int x = 5;
	int n, dy, dx;
	cin >> n;
	char userCommand[10];


	for (int j = 0; j < n; j++) {
		for (int i = 0; i < 10; i++) {
			cin >> userCommand;

			if (strcmp(userCommand, "up") == 0) {
				dy = y + direct[0][0];
				dx = x + direct[0][1];
				y = dy;
				x = dx;
			}
			else if (strcmp(userCommand, "down") == 0) {
				dy = y + direct[1][0];
				dx = x + direct[1][1];
				y = dy;
				x = dx;
			}
			else if (strcmp(userCommand, "left") == 0) {
				dy = y + direct[3][0];
				dx = x + direct[3][1];
				y = dy;
				x = dx;
			}
			else if (strcmp(userCommand, "right") == 0) {
				dy = y + direct[4][0];
				dx = x + direct[4][1];
				y = dy;
				x = dx;
			}
			else if (strcmp(userCommand, "click") == 0) {
				cout << y << "," << x;
			}
		}
	}

	return 0;
}