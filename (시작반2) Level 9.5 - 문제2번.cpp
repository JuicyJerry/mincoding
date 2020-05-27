#include <iostream>
using namespace std;
int main() {
	char vect[5];
	for (int i = 0; i < 5; i++) {
		cin >> vect[i];
	}

	int cnt = 0;
	char input = 'A';
	for (int i = 0; i < 5; i++) {
		if (vect[i] == input) cnt++;
	}

	cout << "문자" << input << "는 " << cnt << "개발견" << endl;

	for (int i = 0; i < 5; i++) {
		if (vect[i] == input) cout << i << "번" << endl;
	}

	return 0;
}