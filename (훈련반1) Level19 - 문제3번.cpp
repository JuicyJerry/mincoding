#include <iostream>
using namespace std;
struct MC
{
	char burger1[9];
	char burger2[9];
};

int main() {
	MC bob;
	MC tom;

	cin >> bob.burger1 >> bob.burger2 >> tom.burger1 >> tom.burger2;

	int len = 0;
	for (int i = 0; i < 9; i++) {
		if (bob.burger1[i] == '\0') {
			len = i;
			break;
		}
	}
	int len1 = 0;
	for (int i = 0; i < 9; i++) {
		if (bob.burger2[i] == '\0') {
			len1 = i;
			break;
		}
	}
	int len2 = 0;
	for (int i = 0; i < 9; i++) {
		if (tom.burger1[i] == '\0') {
			len2 = i;
			break;
		}
	}
	int len3 = 0;
	for (int i = 0; i < 9; i++) {
		if (tom.burger2[i] == '\0') {
			len3 = i;
			break;
		}
	}

	cout << "bob.burger1=" << len << endl;
	cout << "bob.burger2=" << len1 << endl;
	cout << "tom.burger1=" << len2 << endl;
	cout << "tom.burger2=" << len3 << endl;

	return 0;
}