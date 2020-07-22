#include <iostream>
using namespace std;
char y, x;
char map[3][7] = { "354223", "133342", "544235" };
char price[6] = "TPGKC";

int main()
{
	cin >> y >> x;

	if (y == 'A') y = ('0' - 48);
	else if (y == 'B') y = ('1' - 48);
	else if (y == 'C') y = ('2' - 48);
	if (x >= 48 && x <= 57) x = (x - 48) - 1;

	cout << price[(map[y][x] - 48) - 1];

	return 0;
}