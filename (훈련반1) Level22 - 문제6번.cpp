#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char vect[11];
	int max = 0, min = 9999;
	int maxIndex, minIndex;
	for (int i = 0; i < 4; i++) {
		cin >> vect;

		string a = vect;
		int len = a.length();

		if (len > max) {
			max = len;
			maxIndex = i;
		}
		if (len < min) {
			min = len;
			minIndex = i;
		}
	}

	cout << "긴문장:" << maxIndex << endl;
	cout << "짧은문장:" << minIndex;

	return 0;
}