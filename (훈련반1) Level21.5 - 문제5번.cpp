#include <iostream>
using namespace std;
int main()
{
	int vect[8];
	for (int i = 0; i < 8; i++) {
		cin >> vect[i];
	}
	int bucket[10] = { 0 };
	for (int j = 0; j < 10; j++) {
		int cnt = 0;

		for (int i = 0; i < 10; i++) {
			if (vect[j] == i) {
				cnt++;
				bucket[j] = cnt;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << bucket[i] << " ";
	}

	return 0;
}