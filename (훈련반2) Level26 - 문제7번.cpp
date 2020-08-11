#include <iostream>
using namespace std;

struct Node
{
	int x;
	char y;
	Node* next;
};

Node* head, * last;

void addNode(int x, char y)
{
	if (head == NULL)
	{
		head = new Node();
		head->x = x;
		head->y = y;
		last = head;
	}
	else
	{
		last->next = new Node();
		last = last->next;
		last->x = x;
		last->y = y;
	}
}

int main()
{
	int n;
	cin >> n;
	int q;
	char t;
	for (int i = 0; i < n; i++)
	{
		cin >> q >> t;
		addNode(q, t);
	}

	Node* p;
	for (p = head; p != NULL; p = p->next)
	{
		cout << p->x << " ";
		cout << p->y << endl;;
	}

	return 0;
}