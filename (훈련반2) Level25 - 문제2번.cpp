#include <iostream>
using namespace std;

int main()
{
	char* chr = new char[3];
	cin >> chr[0] >> chr[1] >> chr[2];
	int cnt = 0;
	for (int i = 0; i < 3; i++)
	{
		if (chr[i] >= 97 && chr[i] <= 122) cnt++;
	}
	if (cnt) cout << "�ҹ�������";
	else cout << "��δ빮��";

	return 0;
}
