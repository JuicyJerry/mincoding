#include <iostream>
using namespace std;

struct BBQ
{
	int a;
	int b;
};

int main()
{
	BBQ* t = new BBQ;
	cin >> t->a >> t->b;

	cout << t->a + 5 << " " << 5 + t->b;

	return 0;
}