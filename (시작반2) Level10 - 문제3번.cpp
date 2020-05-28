#include <iostream>
using namespace std;
char coke() {
	char chr;
	cin >> chr;

	return chr;
}

int chicken() {
	int num;
	cin >> num;

	return num + 10;
}
void KFC() {
	int num = chicken();
	char chr = coke();
	cout << num;
	cout << chr;
}

int main() {
	KFC();

	return 0;
}