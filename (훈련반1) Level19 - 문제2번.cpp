#include <iostream>
using namespace std;

struct Data
{
	int x;
	int y;
	int z;

};

int main() {
	Data a;
	Data b;

	cin >> a.x >> a.y >> a.z;
	cin >> b.x >> b.y >> b.z;

	cout << a.x + b.x << endl << a.y + b.y << endl << a.z + b.z;

	return 0;
}