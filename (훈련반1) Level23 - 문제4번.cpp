#include <iostream>
using namespace std;
char name[6] = "BTSKR";
char path[10];
int n;
int cnt = 0;
int via[10];

void run(int level)
{


	if (level == n)
	{
		int flag = 0;
		for (int i = 0; i < n; i++) {
			if (path[i] == 'S') {
				flag = 1;
				break;
			}
		}

		if (flag == 0) return;

		cnt++;
		//cout << path << endl;
		return;
	}

	for (int i = 0; i < 5; i++) {
		if (via[i] == 0)
		{
			via[i] = 1;
			path[level] = name[i];
			run(level + 1);
			path[level] = 0;
			via[i] = 0;
		}
	}
}

int main()
{
	cin >> n;
	run(0);
	cout << cnt;

	return 0;
}