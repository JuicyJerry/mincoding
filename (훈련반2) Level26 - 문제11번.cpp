#include <iostream>
using namespace std;
int main()
{
	char vect[10];
	cin >> vect;
	int cursorIndex;
	cin >> cursorIndex;
	char cmd[10];
	cin >> cmd;

	for (int i = 0; i < 9; i++)
	{
		if (cmd[i] == 'L')
		{
			cursorIndex--;
		}
		else if (cmd[i] == 'R')
		{
			cursorIndex++;
		}
		else if (cmd[i] == 'D')
		{
			vect[cursorIndex] = '\0';
		}
	}

	cout << cursorIndex;


	return 0;
}