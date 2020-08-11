#include <iostream>
using namespace std;

struct Node
{
	int x;
	Node* next;
};

Node* head, * last;

void Enqueue(int value)
{
	if (head == NULL)
	{
		head = new Node();
		head->x = value;
		last = head;
		return;
	}
	last->next = new Node();
	last = last->next;
	last->x = value;
}

void Dequeue()
{
	Node* p = head;
	cout << p->x;
	head = head->next;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		Enqueue(1);
		Enqueue(2);
		Enqueue(3);
		Dequeue();
		Dequeue();
		Dequeue();
	}

	return 0;
}