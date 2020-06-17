#include <iostream>
using namespace std;
struct FileDown
{
	int x, y;
};

int main() {
	FileDown dn;
	cin >> dn.x >> dn.y;
	int sum = 0;
	while (100) {
		dn.x++;
		dn.y++;
		sum++;
		if (dn.x >= 100 && dn.y >= 100) break;
	}
	cout << sum;

	return 0;
}