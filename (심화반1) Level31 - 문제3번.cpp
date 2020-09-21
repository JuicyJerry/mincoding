#include <iostream>
using namespace std;
int main() {
	// 메모리 사이즈 계산하기
	// 1번 == 4 * 10 / 1000
	int input;
	cin >> input;;

	// int = 4byte, 40
	if (input == 1) cout << 4 * 10;
	// double = 8byte, 74
	else if (input == 2) cout << (8 * 3) + (10 * 1) + (4 * 10);
	// padding 포함, struct = 8byte, 800
	else if (input == 3) cout << 8 * 100;
	// 64bit, padding 포함 struct = 8byte, 16
	else if (input == 4) cout << 8 * 2;

	return 0;
}