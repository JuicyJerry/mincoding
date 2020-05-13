#include <iostream>
using namespace std;
int x, y;
void input() {
	cin >> x >> y;
}

void output() {
	for (int i = 5; i <= x + y; i++) {
		cout << i << " ";
	}
}

int main() {
	input();
	output();

	return 0;
}