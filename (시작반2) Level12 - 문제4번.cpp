#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int y = 0; y < n; y++) {
		for (int x = 1; x <= 3; x++) {
			cout << x;
		}
		cout << endl;
	}
	return 0;
}