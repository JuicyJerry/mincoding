#include <iostream>
using namespace std;

struct Node
{
	int data[4];
	int x;
};

int main()
{
	Node a, b;
	a.data[0] = { 1 };
	a.data[1] = { 2 };
	a.data[2] = { 3 };
	a.data[3] = { 4 };
	// for(int i = 0; i < 4; i++)
	// {
	// 	 a.data[i] = i + 1;
	// }
	a.x = 10;
	b.data[0] = { 7 };
	b.data[1] = { 8 };
	b.data[2] = { 9 };
	b.data[3] = { 10 };
	b.x = 15;

	Node* p, * q;
	p = &a;
	q = &b;

	for (int i = 0; i < 4; i++)
	{
		cout << p->data[i] << " ";
	}
	cout << '\n' << p->x << '\n';

	for (int i = 0; i < 4; i++)
	{
		cout << q->data[i] << " ";
	}
	cout << '\n' << q->x;

	return 0;
}