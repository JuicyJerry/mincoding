#include <iostream>
#include <Windows.h> //wind32API
using namespace std;

char map[10][10] = {
	"#       #",
	"#       #",
	"#       #",
	"#       #",
	"#       #",
	"#       #",
	"#       #",
	"#       #",
	"#       #",
	"#########",
};

int nowY = 0;
int nowX = 2;

char block[4][5] =
{
	"#   ",
	"### ",
	"    ",
	"    ",
};


void spin()
{
	char temp[4][4];
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			temp[x][3 - y] = block[y][x];
		}
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			block[y][x] = temp[y][x];
		}
	}

	int minY = 99;
	int minX = 99;
	int maxY = -99;
	int maxX = -99;
	int tt2[4][4] = { 0 };

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (block[y][x] == '#') {
				if (minY > y) minY = y;
				if (minX > x) minX = x;
				if (maxY < y) maxY = y;
				if (maxX < x) maxX = x;
			}
		}
	}

	for (int y = minY; y <= maxY; y++) {
		for (int x = minX; x <= maxX; x++) {
			tt2[y - minY][x - minX] = block[y][x];
		}
	}
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			block[y][x] = tt2[y][x];
		}
	}
}

void print()
{
	// ȭ�� ����� ��ɾ�
	system("cls");

	for (int y = 0; y < 10; y++) {
		for (int x = 0; x < 9; x++) {

			// ���� blcok�� ����ؾ� �� ������ blcok�� 
			// �� �ܿ��� map�� ����Ѵ�

			// 4X4 ��� �� ������
			if (!(nowY <= y && y <= nowY + 4 && nowX <= x && x <= nowX + 4))
			{
				cout << map[y][x];
			}

			else {
				// 4X4 �� �ȿ� ������
				int by = y - nowY;

				// # ��ġ��� # ���, �� �ܿ��� map ���
				int bx = x - nowX;
				if (block[by][bx] == '#') cout << "#";
				else cout << map[y][x];
			}
		}
		cout << endl;
	}
}

int isStack(int dy, int dx)
{
	// MAP�� dy, dx �ʿ� block ������ ������ ��
	// ��ġ���� �� ��ġ����
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {

			if (block[y][x] == '#')
				if (map[dy + y][dx + x] == '#') {
					return 1;
				}
		}
	}
	return 0;
}

void down()
{
	if (isStack(nowY + 1, nowX) == 0) {
		nowY++;
		return;
	}

	// ��ĥ ��
	// 1. block�� �ʿ� ����
	// 2. ���ο� block �غ�
	// 3. nowY, nowX - O, 2�� �ʱ�ȭ

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (block[y][x] == '#') {
				map[nowY + y][nowX + x] = '#';
			}
		}
	}

	// ���ο� �� �غ�
	nowY = 0;
	nowX = 2;
}


int main()
{
	while (1) //���η���
	{
		print();
		// Ű �ν�
		if (GetAsyncKeyState(VK_UP) & 0x8001) {
			spin();

			if (isStack(nowY, nowX) == 1) {
				spin(); spin(); spin();
			}
		}
		if (GetAsyncKeyState(VK_LEFT) & 0x8001) {
			if (isStack(nowY, nowX - 1) == 0) {
				nowX--;
			}
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8001) {
			if (isStack(nowY, nowX + 1) == 0) {
				nowX++;
			}
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8001) {
			down();
		}
	}

	Sleep(100); // 0.1�� ���

	return 0;
}

