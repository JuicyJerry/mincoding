#include <iostream>
using namespace std;
char vect[3][4] = { "abc", "ewz", "qva" };
void Process(char upChr) {
	int flag = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (upChr >= 'A' && upChr <= 'Z') upChr = upChr + 32;
			if (vect[y][x] == upChr) {
				flag++;
				break;
			}
		}
	}
	if (flag > 0) cout << "존재";
	else cout << "없음";
}

void input() {
	char upChr;
	cin >> upChr;
	Process(upChr);
}

int main() {
	input();

	return 0;
}