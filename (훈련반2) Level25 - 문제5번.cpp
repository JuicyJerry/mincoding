#include <iostream>
using namespace std;
struct Node
{
	int t;
	Node* next;
};

int main()
{
	Node* head;
	head = new Node;
	head->t = 3;
	head->next = new Node;
	head->next->t = 5;
	head->next->next = new Node;
	head->next->next->t = 4;
	head->next->next->next = new Node;
	head->next->next->next->t = 2;
	head->next->next->next->next = NULL;

	Node* p = head;
	while (p != NULL)
	{
		cout << p->t << " ";

		p = p->next;
	}

	return 0;
}