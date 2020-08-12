#include <iostream>
using namespace std;
int main()
{
	// map[0]: Amy, map[1] : Edger, map[2]: Bob, map[3]: Diane, map[4]: Chloe
	int map[5][5] = { 0 };
	map[0][1] = map[2][0] = map[3][2] = map[4][2] = 1;

	int max = 0;
	int who;
	for (int x = 0; x < 3; x++)
	{
		int cnt = 0;
		for (int y = 0; y < 3; y++)
		{
			cnt++;
			if (max < cnt)
			{
				max = cnt;
				who = y;
			}
		}
	}
	if (who == 0) cout << "Amy";
	else if (who == 1) cout << "Edger";
	else if (who == 2) cout << "Bob";
	else if (who == 3) cout << "Diane";
	else if (who == 4) cout << "Chloe";

	return 0;
}