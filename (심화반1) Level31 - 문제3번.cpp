#include <iostream>
using namespace std;
int main() {
	// �޸� ������ ����ϱ�
	// 1�� == 4 * 10 / 1000
	int input;
	cin >> input;;

	// int = 4byte, 40
	if (input == 1) cout << 4 * 10;
	// double = 8byte, 74
	else if (input == 2) cout << (8 * 3) + (10 * 1) + (4 * 10);
	// padding ����, struct = 8byte, 800
	else if (input == 3) cout << 8 * 100;
	// 64bit, padding ���� struct = 8byte, 16
	else if (input == 4) cout << 8 * 2;

	return 0;
}