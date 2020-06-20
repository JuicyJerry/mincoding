#include <iostream> 
using namespace std;
int getLength(char sentence[6]) {
	for (int i = 0; i < 6; i++) {
		if (sentence[i] == '\0') {
			return i;
		}
	}
	return 0;
}

int main() {
	char d1[6], d2[6];
	cin >> d1 >> d2;

	int n1, n2;
	n1 = getLength(d1);
	n2 = getLength(d2);

	int flag = 0;
	if (n1 == n2) {
		flag = 0;
		for (int i = 0; i < n1; i++) {
			if (d1[i] != d2[i]) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) cout << "다름";
		else cout << "같음";
	}

	else cout << "다름";

	return 0;
}