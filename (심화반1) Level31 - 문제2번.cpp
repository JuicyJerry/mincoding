#include <iostream>
#include <vector>
using namespace std;
// 4 <= n <= 100,000
int n;
int vect[15];

void input() {
	cin >> n;
	//vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> vect[i];
	}
}

int sum = 0;
int m = 4;
int select(int idx) {
	for (int i = 0; i < m; i++) {
		sum += vect[idx + i];
	}
	return sum;
}

int main() {
	input();
	int sum = select(0);
	int min = 999;

	for (int i = 0; i <= n - m; i++) {
		if (sum < min) min = sum;
		if (i == n - m) break;

		sum += vect[i + m];
		sum -= vect[i];
	}
	cout << min;

	return 0;
}