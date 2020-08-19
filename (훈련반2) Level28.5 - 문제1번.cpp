#include <iostream>
using namespace std;

struct Node {
	char chr;
	int vect;
};
int n;

void getNameArrange(Node t[10]) {
	char temp, temp1;
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			if (t[y].chr < t[x].chr) {
				temp = t[x].chr;
				temp1 = t[x].vect;
				t[x].chr = t[y].chr;
				t[x].vect = t[y].vect;
				t[y].chr = temp;
				t[y].vect = temp1;
			}
		}
	}

	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			if (t[y].chr == t[x].chr && t[y].vect < t[x].vect) {
				temp = t[x].chr;
				temp1 = t[x].vect;
				t[x].chr = t[y].chr;
				t[x].vect = t[y].vect;
				t[y].chr = temp;
				t[y].vect = temp1;
			}
		}
	}
}

int main() {
	cin >> n;
	Node t[10];


	for (int i = 0; i < n; i++) {
		cin >> t[i].chr;
		cin >> t[i].vect;
	}

	getNameArrange(t);

	for (int i = 0; i < n; i++) {
		cout << t[i].chr << " " << t[i].vect << endl;
	}
	return 0;
}