#include <iostream>
using namespace std;
int main() {
	struct sketchbook
	{
		char image[3][3];
	};

	sketchbook book;
	char result[10];
	char temp;
	int t = 0;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> book.image[y][x];

			if (book.image[y][x] == book.image[y][x + 1]) break;

			else if (book.image[y][x] != book.image[y][x - 1]) {
				result[t] = book.image[y][x];
				t++;
				if (result[t] > result[t + 1]) {
					temp = result[t];
					result[t] = result[t + 1];
					result[t + 1] = temp;
				}
			}
		}
	}

	for (int q = 0; q < 10; q++) {
		if (result[q] == '\0') break;
		else if (result[q] != '\0') cout << result[q];
	}

	return 0;
}