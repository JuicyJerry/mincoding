#include <iostream>
using namespace std;
int tomsFirstLoverWin;
char tomsFirstLoverName[8];

struct Train
{
	int win;
	char name[8];
};

Train t[7] = { {15, "summer"} , {33, "cloe"}, {24, "summer"}, {28, "niki"}, {32, "jenny"}, {20, "summer"}, {40, "coco"} };

int isWinSame(int i)
{
	int winFlag = 0;
	for (int i = 0; i < 8; i++) {
		if (t[i].win == tomsFirstLoverWin) {
			winFlag = i;
			return winFlag;
		}
	}
}

int isNameSame()
{
	int nameFlag = 0;
	for (int j = 0; j < 7; j++) {
		for (int i = 0; i < 8; i++) {
			if (t[j].name[i] != tomsFirstLoverName[i]) {
				nameFlag = 1;
				break;
			}
			else {
				nameFlag = i;
				int ret = isWinSame(i);
				if (ret == nameFlag) return nameFlag;
			}
		}
		if (nameFlag != 1) break;
	}


}

int main() {

	cin >> tomsFirstLoverName;;
	cin >> tomsFirstLoverWin;

	int nameRet = isNameSame();
	cout << nameRet;

	return 0;
}