#include <iostream>
using namespace std;
int x, y;
void input() {
	cin >> x >> y;
}

void output() {
	if ((x >= 'A' && x <= 'Z')
		&& (y >= 'A' && y <= 'Z')) {
		cout << "�빮�ڵ�";
	}
	else if ((x >= 'A' && x <= 'Z' && y >= 'a' && y <= 'z')
		|| (y >= 'A' && y <= 'Z' && x >= 'a' && x <= 'z')) {
		cout << "��ҹ��ڵ�";
	}
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