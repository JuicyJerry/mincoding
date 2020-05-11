#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	int max, min;
	if (x >= y && x >= z) {
		max = x;
		cout << "MAX=" << max << endl;
	}
	else if (y >= x && y >= z) {
		max = y;
		cout << "MAX=" << max << endl;
	}
	else if (z >= x && z >= y) {
		max = z;
		cout << "MAX=" << max << endl;
	}

	if (x <= y && x <= z) {
		min = x;
		cout << "MIN=" << min << endl;
	}
	else if (y <= x && y <= z) {
		min = y;
		cout << "MIN=" << min << endl;
	}
	else if (z <= x && z <= y) {
		min = z;
		cout << "MIN=" << min << endl;
	}


	return 0;
}