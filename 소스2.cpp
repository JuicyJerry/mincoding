#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int tt = x - y;

	if (tt % 2 == 0) {
		cout << "¦�����";
	}
	else if (!(tt % 2 == 0)) {
		cout << "����Ѵ�";
	}

	return 0;
}