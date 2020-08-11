#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char vect[20];
	cin >> vect;
	int len = strlen(vect);
	int t = 0;
	for (int i = 0; i < len; i++)
	{
		if (vect[i] == '<') t++;
		else if (vect[i] == '>') t--;
		else if (t < 0)	break;
	}
	if (t == 0) cout << "정상";
	else if (t > 0 || t < 0) cout << "비정상";

	return 0;
}