#include <iostream>
using namespace std;
int main()
{
	int num[5];
	for (int i = 0; i < 5; i++) cin >> num[i];
	for (int i = 0; i < 5; i++) {
		if (i == 4) break;
		if (num[i] > num[i + 1]) {
			cout << "Áõ°¡¾ÈµÊ";
			return 0;
		}
	}
	cout << "Áõ°¡µÊ";
	return 0;
}