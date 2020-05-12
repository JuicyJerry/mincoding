#include <iostream> 
using namespace std;
int num;
int vect[3][3];
void process() {
	cin >> num;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			vect[y][x] = num;
			num++;
		}
	}
}

void output() {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}
}
int main() {
	process();
	output();
}