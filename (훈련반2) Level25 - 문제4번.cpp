#include <iostream>
#include <cstring>
using namespace std;

// H, HR, HL, HLL, HLR
char input[6];
char inputContainer[5][5] = { "H", "HR", "HL", "HLL", "HLR" };
int cmp0, cmp1, cmp2, cmp3, cmp4;
int cnt = 0;

struct Node
{
	char chr;
	Node* left;
	Node* right;
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
		last->left = new Node();
		last->right = new Node();

		if (cmp1 == 0)
		{
			last = last->right;	// lastÀÌ NULL·Î º¯°æµÊ
		}
		else if (cmp4 == 0)
		{
			last = last->left;	// lastÀÌ NULL·Î º¯°æµÊ
			//last = last-> right;	// lastÀÌ NULL·Î º¯°æµÊ
		}
		else if (cmp4 == 0 && cnt == 1)
		{
			last = last->left;	// lastÀÌ NULL·Î º¯°æµÊ
			//last = last-> right;	// lastÀÌ NULL·Î º¯°æµÊ
		}
		else
		{
			last = last->left;
		}

		last->chr = value;
	}
}

int main()
{
	cin >> input;
	cmp0 = strcmp(input, inputContainer[0]);
	cmp1 = strcmp(input, inputContainer[1]);
	cmp2 = strcmp(input, inputContainer[2]);
	cmp3 = strcmp(input, inputContainer[3]);
	cmp4 = strcmp(input, inputContainer[4]);


	if (cmp0 == 0)
	{
		addNode('A');
		head->left = NULL;

		Node* t = head;
		while (t != NULL)
		{
			cout << t->chr;

			t = t->left;
		}
	}
	else if (cmp1 == 0)
	{
		addNode('A');
		addNode('C');
		head->right->left = NULL;

		Node* t = last;
		while (t != NULL)
		{
			cout << t->chr;

			t = t->right;
		}
	}
	else if (cmp2 == 0)
	{
		addNode('A');
		addNode('B');
		head->left->left = NULL;

		Node* t = last;
		while (t != NULL)
		{
			cout << t->chr;

			t = t->left;
		}
	}
	else if (cmp3 == 0)
	{
		addNode('A');
		addNode('B');
		addNode('D');
		head->left->left->left = NULL;

		Node* t = last;
		while (t != NULL)
		{
			cout << t->chr;

			t = t->left;
		}
	}
	else if (cmp4 == 0)
	{
		addNode('A');
		addNode('B');
		cnt++;
		addNode('E');
		head->left->right->left = NULL;

		Node* t = last;
		while (t != NULL)
		{
			cout << t->chr;

			t = t->right;
		}
	}

	return 0;
}