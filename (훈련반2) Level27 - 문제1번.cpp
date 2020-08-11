#include <iostream>
using namespace std;
int flag = 0;

struct Node
{
	int x;
	Node* next;
};

Node* head, * last;

void addNode(int value)
{
	if (head == NULL)
	{
		head = new Node();
		head->x = value;
		last = head;
	}
	else
	{
		last->next = new Node();
		last = last->next;
		last->x = value;
	}
}

void pop()
{
	if (head->next == NULL)
	{
		flag = 1;
		return;
	}
	head = head->next;
}

int main()
{
	int n, q;
	cin >> n;
	char t;
	int ret;
	for (int i = 0; i < n; i++)
	{
		cin >> t >> q;
		if (t == 'E')
		{
			addNode(q);
		}
		else
		{
			pop();
		}
	}

	if (flag == 1) cout << "Error";
	else
	{
		Node* p;
		for (p = head; p != NULL; p = p->next)
		{
			cout << p->x << " ";
		}
	}

	return 0;
}