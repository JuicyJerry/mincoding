#include <iostream>
using namespace std;

struct Node
{
	char x;
	Node* next;
};

Node* head, * last;

void addNode(char value)
{
	if (head == NULL)
	{
		head = new Node();
		head->x = value;
		last = head;
	}

	last->next = new Node();
	last = last->next;
	last->x = value;
}

int main()
{
	int n;
	cin >> n;

	// version 1
	// 1~11 node 만들기
	for (int i = 1; i <= 10; i++)
	{
		addNode(i);
	}
	// A~Z node 만들기
	for (int i = 0; i <= 24; i++)
	{
		addNode(i + 'A');
	}

	// version 2
	// A~Z까지 만들기
	char ch = n - 11 + 'A';
	for (int i = 0; i < 4; i++)
	{
		addNode(ch);
		ch++;
	}

	for (int i = 0; i < n; i++)
	{
		head = head->next;
	}

	Node* p = head;
	for (int i = 0; i < 4; i++)
	{
		cout << p->x;
		p = p->next;
	}

	return 0;
}