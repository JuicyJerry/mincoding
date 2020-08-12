#include <iostream>
using namespace std;

struct Node
{
	char chr;
	Node* next;
};

Node* head, * last;

void addNode(char chr)
{
	if (head == NULL)
	{
		head = new Node();
		head->chr = chr;
		last = head;
		return;
	}
	last->next = new Node();
	last = last->next;
	last->chr = chr;
}

int main()
{
	int n;
	cin >> n;
	char input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		addNode(input);
	}


	Node* p = head;
	while (p != NULL)
	{
		cout << p->chr << " ";
		p = p->next;
	}

	return 0;
}