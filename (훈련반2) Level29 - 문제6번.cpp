#include <iostream>
using namespace std;

struct Node
{
	int num;
	int level;
};

Node queue[6] = { {0, 0} };

int head = 0;
int tail = 1;
int map[6][6];

int value[6] = { 0, 1, 3, 4, 2, 5 };

int main()
{
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 6; x++) {
			cin >> map[y][x];
		}
	}
	while (head != tail)
	{
		Node now = queue[head];
		if (now.num % 2 != 0)	cout << value[now.num] << " ";

		for (int i = 0; i < 7; i++) {
			if (map[now.num][i] == 1) {
				queue[tail++] = { i, now.level + 1 };
			}
		}
		head++;
	}

	return 0;
}