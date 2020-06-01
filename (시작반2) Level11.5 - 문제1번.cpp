#include <iostream>
using namespace std;
int main() {
	char input1, input2;
	cin >> input1 >> input2;
	int flag = 0;
	char vect[6] = { 'D', 'F', 'G', 'A', 'Q' };
	for (int i = 0; i < 6; i++) {
		if (vect[i] >= input1 && vect[i] <= input2) flag++;
	}
	if (flag > 0) cout << "발견!!!";
	else cout << "미발견!!!";


	return 0;
}