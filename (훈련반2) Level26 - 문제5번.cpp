#include <iostream>
using namespace std;

struct Node
{
	char ch;
	Node* next;
};

Node* head, * last;

void pop(char target)
{
	Node* backup = head;
	head = head->next;
	delete backup;
}

void push(char ch)
{
	if (head == NULL)
	{
		head = new Node();
		head->ch = ch;
		last = head;
	}
	else
	{
		last->next = new Node();
		last = last->next;
		last->ch = ch;
	}
}

void front(int leftNumber)
{
	Node* p;
	for (p = head; p != NULL; p = p->next)
	{
		cout << p->ch << " ";
		//	if (p->next == NULL) break;
	}
}

int main()
{
	int queue, dequeue;
	cin >> queue >> dequeue;
	char chr;
	for (int i = 0; i < queue; i++)
	{
		cin >> chr;
		push(chr);
	}

	for (int i = 0; i < dequeue; i++)
	{
		pop(chr);
	}

	int leftNumber = queue - dequeue;

	front(leftNumber);
	//for (Node* p = head; p != NULL; p = p->next) {
	//	cout << p->ch << " ";
	//}

	return 0;
}