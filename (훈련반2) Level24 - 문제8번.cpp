#include <iostream>
using namespace std;
int map[7] = { 3, 5, 5, 6, 9, 1, 2 };

void swap(int a, int b)
{
	int temp;
	int t = 0;
	for (int y = 0; y < (b / 2); y++)
	{
		temp = map[a + t];
		map[a + t] = map[b - t];
		map[b - t] = temp;
		t++;
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	swap(a, b);

	for (int y = 0; y < 7; y++)
	{
		cout << map[y] << " ";
	}

	return 0;
}