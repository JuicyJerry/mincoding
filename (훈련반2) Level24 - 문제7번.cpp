#include <iostream>
using namespace std;
struct map
{
	int j, i;
	int map[5][5];
};

int main()
{
	map t = {};

	int flag = 0;
	for (int y = 0; y < 6; y++)
	{
		cin >> t.j >> t.i;
		if (t.map[t.j][t.i] == 1)
		{
			cout << "중복된좌표발견";
			flag = 1;
			break;
		}
		t.map[t.j][t.i] = 1;
	}

	if (flag == 0) cout << "중복없음";

	return 0;
}