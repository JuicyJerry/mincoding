#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char move[6];
	int n;
	int y = 5;
	int x = 5;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> move;

		if (strcmp(move, "up") == 0) y--;
		else if (strcmp(move, "down") == 0) y++;
		else if (strcmp(move, "left") == 0) x--;
		else if (strcmp(move, "right") == 0) x++;
		else if (strcmp(move, "click") == 0) cout << y << "," << x << endl;
	}

	return 0;
}