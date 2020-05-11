#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int tt = x - y;

	if (tt % 2 == 0) {
		cout << "Â¦»ç¶û¸¸";
	}
	else if (!(tt % 2 == 0)) {
		cout << "°í¹éÇÑ´Ù";
	}

	return 0;
}