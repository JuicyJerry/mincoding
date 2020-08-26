#include <iostream>
using namespace std;

char ch1, ch2;
char value[10] = " ADFZCGQH";

int findExist(int i, char chrA)
{
	if (value[i * 2] == chrA) return 1;
	return 0;
}

int main()
{
	cin >> ch1 >> ch2;

	for (int i = 1; i < 9; i++) {
		if (value[i] == ch1) {
			int ret1 = findExist(i, ch2);
			if (ret1 == 1) {
				cout << "부모자식관계";
				return 0;
			}
			cout << "아님";
			return 0;
		}
		else if (value[i] == ch2) {
			int ret2 = findExist(i, ch1);
			if (ret2 == 1) {
				cout << "부모자식관계";
				return 0;
			}
			cout << "아님";
			return 0;
		}
	}
}