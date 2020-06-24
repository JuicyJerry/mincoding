#include <iostream>
using namespace std;
int main() {
	char answer[7] = { "APPLET" };
	char userAnswer[5] = { '\0' };
	for (int i = 0; i < 5; i++) cin >> userAnswer[i];
	int cnt = 0;

	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 5; x++) {
			if (answer[y] == userAnswer[x]) {
				cnt++;
				break;
			}
		}
	}
	cout << cnt << "개 맞추었습니다";

	return 0;
}