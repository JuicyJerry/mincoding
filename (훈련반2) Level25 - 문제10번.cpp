#include <iostream>
#include <cstring>
using namespace std;

int isPair(char vect[20])
{
	int cntF = 0;
	int cntB = 0;
	int len = strlen(vect);

	for (int y = 0; y < 20; y++)
	{
		if (vect[y] == 'B') cntB++;
		if (vect[y] == 'F') cntF++;
		if (vect[y] == '\0') break;
	}

	if (len % 2 != 0) return 1;
	else if (vect[0] == 'F') return 1;
	else if (cntB != cntF) return 1;

	return 0;
}

int main()
{
	// ����: 1. B�� F�� ��ġ, 2. B�� F�� ����
	char vect[20] = { '\0' };
	cin >> vect;

	int ret = isPair(vect);
	if (ret == 1) cout << "¦�̾ȸ���";
	else cout << "¦�̸���";




	return 0;
}