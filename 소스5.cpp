#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	if (x >= 80) {
		cout << "수";
	}
	else if (x >= 70) {
		cout << "우";
	}
	else if (x >= 60) {
		cout << "미";
	}
	else {
		cout << "재시도";
	}

	return 0;
}