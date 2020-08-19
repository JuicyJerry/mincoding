#include <iostream>
using namespace std;
int v1[6], v2[6], result[6];

void input()
{
	for (int i = 0; i < 6; i++) cin >> v1[i];
	for (int i = 0; i < 6; i++) cin >> v2[i];
}

int main()
{
	input();

	for (int y = 5; y >= 0; y--) {
		if (v1[y] + v2[y] >= 10) {
			result[y] = (v1[y] + v2[y]) % 10 + result[y];
			result[y - 1] += 1;
		}
		else {
			result[y] = result[y] + v1[y] + v2[y];
		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}