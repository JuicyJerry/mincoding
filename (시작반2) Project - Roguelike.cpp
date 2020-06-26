#include <iostream>
#include <Windows.h> // win32 api
using namespace std;

char map[5][6] = {
	"#####",
	"#   #",
	"# # #",
	"#M  #",
	"#####",
};

int dy = 1;
int dx = 1;

void print()
{
	system("cls");

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 6; x++) {
			if (y == dy && x == dx) cout << "@";
			else cout << map[y][x];
		}
		cout << endl;
	}
}

int main()
{
	system("color 1F");

	while (1)
	{
		print();
		if (GetAsyncKeyState(VK_UP) & 0x8001) {
			if (map[dy - 1][dx] != '#')
				dy--;
		}
		else if (GetAsyncKeyState(VK_DOWN) & 0x8001) {
			if (map[dy + 1][dx] != '#') {
				dy++;
			}
		}

		else if (GetAsyncKeyState(VK_LEFT) & 0x8001) {
			if (map[dy][dx - 1] != '#') {
				dx--;
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT) & 0x8001) {
			if (map[dy][dx + 1] != '#') {
				dx++;
			}
		}
		Sleep(100);
	}

	return 0;
}

//59ºÐºÎÅÍ