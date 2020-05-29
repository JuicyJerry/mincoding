#include <iostream>
using namespace std;

struct BBQ {
	int x;
	int data[3];

};
int main() {
	BBQ g;
	cin >> g.x;
	cin >> g.data[0];
	cin >> g.data[1];
	cin >> g.data[2];

	int temp = 0;

	for (int i = 0; i < 3; i++) temp += g.data[i];
	cout << temp << " " << g.x;

	return 0;
}