#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int y = 0;
	while (y < 3) {
		int x = 0;
		while (x < 5) {
			cout << num;
			x++;
		}
		y++;
		cout << endl;
	}

	return 0;
}