#include <iostream>
using namespace std;

int levelDepth, childNodeNum;
int path[10] = { 0 };
void run(int level)
{
	if (level == levelDepth)
	{
		for (int j = 0; j < levelDepth; j++) {
			cout << path[j] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = 0; i < childNodeNum; i++) {
		path[level] = i;
		run(level + 1);
		path[level] = 0;
	}

}


int main()
{
	cin >> levelDepth >> childNodeNum;
	run(0);

	return 0;
}