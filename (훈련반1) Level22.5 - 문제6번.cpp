#include <iostream>
#include <cstring>
using namespace std;
char input[4][11];
int result[4];
int t, temp;
int minIndex = 0;

void getArrange(int i)
{
	int min = 9999;
	for (int i = 0; i < 4; i++) {
		if (result[i] < min) {
			min = result[i];
			minIndex = i;
		}
	}
	result[minIndex] = 9999;
}


int getLength(int i)
{
	t = strlen(input[i]);
	return t;
}


int main()
{
	for (int y = 0; y < 4; y++) {
		cin >> input[y];
	}
	for (int i = 0; i < 4; i++) {
		int ret = getLength(i);
		result[i] = ret;
	}

	for (int i = 0; i < 4; i++) {
		getArrange(i);
		cout << input[minIndex] << endl;
	}

	return 0;
}