#include <iostream>
using namespace std;
char path[10];
char name[3] = "OX";
int winCnt = 0;
int loseCnt = 0;

void run(int level)
{
	if (level == 3)
	{
		winCnt = 0;
		loseCnt = 0;
		for (int i = 0; i < 3; i++)
		{
			if (path[i] == 'O') winCnt++;
			else loseCnt++;
		}

		if (winCnt >= 3) cout << winCnt << "��";
		else if (loseCnt >= 3) cout << loseCnt << "��";
		else cout << winCnt << "��" << loseCnt << "��";

		cout << "(";
		for (int i = 0; i < 3; i++)
		{

			if (path[i] == 'O')
			{
				cout << "��";
			}

			else cout << "��";
		}

		cout << ")" << endl;
		//cout << path << endl;

		return;
	}

	for (int i = 0; i < 2; i++)
	{
		path[level] = name[i];
		run(level + 1);
		path[level] = 0;

	}



}

int main()
{
	run(0);

	return 0;
}
