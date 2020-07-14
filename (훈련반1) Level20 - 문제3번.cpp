#include <iostream>
using namespace std;
int num[6];

void MJ(int level) {
	cout << num[level] << " ";
	if (level == 5) return;
	MJ(level + 1);
	cout << num[level] << " ";
}

int main() {
	for (int i = 0; i < 6; i++) {
		cin >> num[i];
	}
	MJ(0);

	return 0;
}