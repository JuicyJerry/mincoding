#include <iostream>
using namespace std;

int main() {
	int index;
	char sentence[10];
	cin >> sentence;
	cin >> index;
	int len = 0;

	for (int i = 0; i < 10; i++) {
		if (sentence[i] == '\0') {
			len = i;
			break;
		}
	}

	//for (int i = len; i >= index; i--) {
	//	sentence[i + 1] = sentence[i];
	//}

	sentence[index] = '\0';

	int temp;
	for (int i = index; i < len - 1; i++) {
		temp = sentence[i];
		sentence[i] = sentence[i + 1];
		sentence[i + 1] = temp;
	}

	for (int i = 0; i < len - 1; i++) {
		cout << sentence[i];
	}

	return 0;
}