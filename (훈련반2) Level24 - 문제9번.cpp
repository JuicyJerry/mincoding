#include <iostream>
using namespace std;

char name[3] = "OX";
char path[10];
int winCnt;
int loseCnt;
char temp[3];

void run(int level)
{
	if (level == 3)
	{
		winCnt = 0;
		loseCnt = 0;
		for (int i = 0; i < 3; i++)
		{
			if (path[i] == 'O')
			{
				winCnt++;
				temp[i] = '½Â';
			}

			else
			{
				temp[i] = 'ÆÐ';
				loseCnt++;
			}
		}


		if (winCnt >= 3)
		{
			cout << winCnt << "½Â(";
			for (int i = 0; i < winCnt; i++)
			{
				cout << "½Â";
			}
			cout << ")" << endl;
		}
		else if (loseCnt >= 3)
		{
			cout << loseCnt << "ÆÐ(";
			for (int i = 0; i < loseCnt; i++)
			{
				cout << "ÆÐ";
			}
			cout << ")" << endl;

		}
		else
		{
			cout << winCnt << "½Â" << loseCnt << "ÆÐ(";

			for (int i = 0; i < 3; i++)
			{
				cout << temp[i];
			}

			cout << ")" << endl;
		}

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