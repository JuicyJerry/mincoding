#include <iostream>
using namespace std;

struct Node
{
	char chr;
	int x;
	Node* next;
};

Node* head, * last;

void addNode(char ch, int t)
{
	if (head == NULL)
	{
		head = new Node();
		head->chr = ch;
		head->x = t;
		last = head;
		return;
	}
	last->next = new Node();
	last = last->next;
	last->chr = ch;
	last->x = t;
}

int main()
{

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		addNode(i + 'A', i + 1);
	}

	Node* p;
	for (p = head; p != NULL; p = p->next)
	{
		cout << p->chr << " ";
	}
	cout << endl;

	Node* q = head;
	while (q != NULL)
	{
		cout << q->x << " ";
		q = q->next;
	}

	return 0;
}