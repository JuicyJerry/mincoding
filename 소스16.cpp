#include <iostream>
using namespace std;
char x, y;
void input() {
	cin >> x >> y;
}

void output() {
	if (x >= 'A' && x <= 'Z' && y >= 'A' && y <= 'Z') cout << "대문자들";

	else if (x >= 'A' && x <= 'Z' && y >= 'a' && y <= 'z' || y >= 'A' && y <= 'Z' && x >= 'a' && x <= 'z') cout << "대소문자";

	else {
		for (char i = 'a'; i <= 'z'; i++) {
			cout << i;
		}
	}
}

int main() {
	input();
	output();
	return 0;
}