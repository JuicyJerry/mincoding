#include <iostream>
using namespace std;

struct Node
{
	char chr;
	Node* next;
};

Node* head, * last;

void addNode(char value)
{
	if (head == NULL)
	{
		head = new Node;
		head->chr = value;
		last = head;
	}
	else
	{
		last->next = new Node();
		last = last->next;
		last->chr = value;
	}
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		char input[5];
		cin >> input[i];
		addNode(input[i]);
	}

	cout << head->next->next->next->next->chr;



	return 0;
}