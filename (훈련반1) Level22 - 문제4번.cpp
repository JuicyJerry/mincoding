#include <iostream>
#include <cstring>
using namespace std;

char floorNum[11] = "432112345";
char upDownCin[5];
char up[3] = "up";
char down[5] = "down";
int t = 4;
int len;

int main()
{
	for (int i = 0; i < 5; i++) {
		cin >> upDownCin;

		for (int i = 0; i < 5; i++) {
			if (upDownCin[i] == '\0') {
				len = i;
				break;
			}
		}
		for (int i = 0; i <= len; i++) {
			if (upDownCin[i] == up[i] && upDownCin[i] == '\0') {
				t++;
			}
			else if (upDownCin[i] == down[i] && upDownCin[i] == '\0') {
				t--;
			}
		}
	}

	cout << floorNum[t];

	return 0;
}