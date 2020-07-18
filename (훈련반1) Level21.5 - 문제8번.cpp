#include <iostream>
using namespace std;
int main()
{
	char position[5][4] =
	{
		"___",
		"___",
		"ATK",
		"___",
		"___"
	};
	int len;
	char model, direction[7];
	for (int i = 0; i < 7; i++) {
		cin >> model >> direction;
		if (direction[i] == '\0') len = i;



		int dy, dx;
		for (int y = 0; y < 5; y++) {
			for (int x = 0; x < 3; x++) {
				if (model == 'A') {
					dy = y;
					dx = x;
					for (int t = 0; t < len; t++) {
						if (direction[len] == "UP") {
							position[dy][dx] = position[dy - 1][dx];
						}
						else if (direction[len] == "DOWN") {
							position[dy][dx] = position[dy + 1][dx];
						}
						else if (direction[len] == "LEFT") {
							position[dy][dx] = position[dy][dx - 1];
						}
						else if (direction[len] == "RIGHT") {
							position[dy][dx] = position[dy][dx + 1];
						}
					}
				else if (model == 'T') {
					dy = y;
					dx = x;

					if (direction[len] == "UP") {
						position[dy][dx] = position[dy - 1][dx];
					}
					else if (direction[len] == "DOWN") {
						position[dy][dx] = position[dy + 1][dx];
					}
					else if (direction[len] == "LEFT") {
						position[dy][dx] = position[dy][dx - 1];
					}
					else if (direction[len] == "RIGHT") {
						position[dy][dx] = position[dy][dx + 1];
					}
				}
				else if (model == 'K') {
					dy = y;
					dx = x;

					if (direction[len] == "UP") {
						position[dy][dx] = position[dy - 1][dx];
					}
					else if (direction[len] == "DOWN") {
						position[dy][dx] = position[dy + 1][dx];
					}
					else if (direction[len] == "LEFT") {
						position[dy][dx] = position[dy][dx - 1];
					}
					else if (direction[len] == "RIGHT") {
						position[dy][dx] = position[dy][dx + 1];
					}
				}
				}
			}
		}
	}

	return 0;
}