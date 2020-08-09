#include <iostream>
using namespace std;

struct Node
{
	char chr[15];
	Node* next;
};

Node* head, * last;

void addNode(char value)
{
	if (head == NULL)
	{
		head == new Node();
		head->chr = value;
		last = head;
		return;
	}
	last->next = new Node();
	last = last->next;
	last->chr = value;
}

int main()
{
	char input[15];
	cin >> input;
	for (int i = 0; i < 15; i++)
	{
		addNode(input[i]);
	}

	Node* p = head;
	while (p != NULL)
	{
		for (int i = 0; i < 15; i++)
		{
			if (p->chr[i] >= '1' && p->chr[i] <= '9')	cout << p->chr;
		}
		p = p->next;
	}

	return 0;
}