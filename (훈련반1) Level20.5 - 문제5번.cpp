? ? ? #include <iostream>
using namespace std;
int main()
{
	char chr;
	cin >> chr;
	for (char t = chr - 3; t <= chr + 3; t++)
	{
		// if (t >= 83 && t < 90)
		if (t < 65)
		{
			cout << (char)(t + 26);
		}
		//	 else if (t >= 65 && t <= 71)
		else if (t > 90)
		{
			cout << (char)(t - 26);
		}
		else cout << t;
	}

	return 0;
}