#include <iostream>
#include <string>
using namespace std;
char vect[6][6];
char target[6] = "MAPOM";

bool findString()
{
	int cnt = 0;
	for (int y = 0; y < 5; y++) {
		if (vect[y][0] != target[0]) continue;
		for (int x = 0; x < 5; x++) {
			if (vect[y][x] == target[x]) {
				cnt++;
			}
		}
		if (cnt == 5) return true;
	}
	return false;
}

void swap(char& vect1, char& vect2)
{
	char temp;
	temp = vect1;
	vect1 = vect2;
	vect2 = temp;
}

void input()
{
	for (int i = 0; i < 5; i++) cin >> vect[i];
}

int main()
{
	input();

	for (int y = 0; y < 5; y++) {
		swap(vect[y][1], vect[y][3]);
	}

	int ret = findString();
	if (ret == true) cout << "yes";
	else cout << "no";


	return 0;
}