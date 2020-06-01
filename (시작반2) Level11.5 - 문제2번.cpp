#include <iostream> 
using namespace std;
int vect[3][3] = {
	1, 1, 1,
	1, 2, 1,
	3, 6, 3
};

int Count(int value) {
	int flag = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (vect[y][x] == value) flag++;
		}
	}
	return flag;
}

int main() {
	int input;
	cin >> input;
	int ret = Count(input);
	cout << ret;

	return 0;
}