#include <iostream>
using namespace std;

struct Node
{
	char t;
	Node* next;
};

Node* head, * last;

void Enqueue(char t)
{
	if (head == NULL)
	{
		head = new Node();
		head->t = t;
		last = head;
		return;
	}
	last->next = new Node();
	last = last->next;
	last->t = t;
}

void Dequeue()
{
	cout << head->t << " ";
	head = head->next;
}

int main()
{
	char heros[5] = "BIAH";
	for (int i = 0; i < 4; i++)
	{
		Enqueue(heros[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		Dequeue();
		Enqueue(heros[i]);
	}
	//	Dequeue();

	return 0;
}