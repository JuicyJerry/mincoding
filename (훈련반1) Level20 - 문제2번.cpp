#include <iostream>
using namespace std;

void bbq(int x) {
	cout << x << " ";
	if (x == 0)
	{
		return;
	}
	bbq(x - 1);
	cout << x << " ";

}

int main() {
	int n;
	cin >> n;
	bbq(n);

	return 0;
}