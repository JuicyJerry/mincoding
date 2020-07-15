#include <iostream>
using namespace std;
int main() {
	int v1[4];
	int v2[4];
	int result[8] = { 0 };
	for (int i = 0; i < 4; i++) {
		cin >> v1[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> v2[i];
	}
	int t = 0;
	int s = 0;
	int j;

	for (int i = 0; i < 8; i++) {
		if (v1[t] >= v2[s]) {
			result[i] = v2[s];
			s++;
		}
		else if (v1[t] <= v2[s]) {
			result[i] = v1[t];
			t++;
		}
		if (t == 4) {
			for (int j = i + 1; j < 8; j++) {
				result[j] = v2[s];
				s++;
			}
		}
		else if (s == 4) {
			for (j = i + 1; j < 8; j++) {
				result[j] = v1[t];
				t++;
			}
		}

		if (t == 4 && s == 4) break;

	}
	for (int i = 0; i < 8; i++) {
		cout << result[i] << " ";
	}
	return 0;
}