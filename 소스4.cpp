#include <iostream>
using namespace std;

int main()
{
	int vect[5];
	int cnt = 0;

	for (int i = 0; i < 5; i++) {
		cin >> vect[i];
	}

	for (int i = 0; i < 5; i++) {
		if (3 <= vect[i] && vect[i] <= 7) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}