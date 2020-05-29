#include <iostream>
using namespace std;
int vect[7][5] = {
	1, 0, 0, 0, 0,
	1, 0, 1, 0, 0,
	1, 1, 0, 1, 0,
	1, 0, 1, 0, 0,
	0, 1, 0, 0, 1,
	0, 0, 0, 1, 0,
	1, 1, 0, 0, 0
};

int num;
int cnt = 0;

void INPUT() {
	cin >> num;

}

void PROCESS() {
	for (int i = 0; i < 7; i++) {
		if (vect[i][num] == 1) cnt++;
	}
}

int OUTPUT() {

	return cnt;
}

int main() {
	INPUT();
	PROCESS();
	cout << OUTPUT();


	return 0;
}