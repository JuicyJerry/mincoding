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
			cout << "�ߺ�����ǥ�߰�";
			flag = 1;
			break;
		}
		t.map[t.j][t.i] = 1;
	}

	if (flag == 0) cout << "�ߺ�����";

	return 0;
}