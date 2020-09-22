#include <iostream>
#include <string>
using namespace std;

int n;
int cnt = 0;

int main()
{
	string map[10];
	string target = "HITSMUSIC";

	cin >> n;
	for (int i = 0; i < n; i++) cin >> map[i];

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (i > j) continue;
			if (map[i] + map[j] == target) cnt += 1;
		}
	}
	cout << cnt;
	return 0;
}