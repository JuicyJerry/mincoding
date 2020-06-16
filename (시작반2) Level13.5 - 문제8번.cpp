#include <iostream>
using namespace std;
int compare(char a[10], char b[10], char c[10]) {
	int flag = 0;
	for (int i = 0; i < 10; i++) {
		if (a[i] != b[i] || b[i] != c[i] || c[i] != a[i]) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) return 0;
	else return 1;

}

int main() {
	char a[10] = { 0 };
	char b[10] = { 0 };
	char c[10] = { 0 };
	cin >> a >> b >> c;
	int ret = compare(a, b, c);
	if (ret == 0) cout << "NO";
	else cout << "YES";
	return 0;
}