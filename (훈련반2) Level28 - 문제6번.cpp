#include <iostream>
using namespace std;

char name[10];
int map[6][6] =
{
	0, 1, 1, 0, 0, 0,
	0, 0, 0, 1, 1, 0,
	0, 0, 0, 0, 0, 1,
};

void input()
{
	cin >> name;
}

struct Node
{
	char chr;
	Node* left;
	Node* right;
};

Node* head, * last;

void addNode(char* chr, Node* now)
{
	if (head == NULL)
	{
		head = new Node();
		head->chr = *chr;
		last = head;
	}
	else if (chr - 'A' % 2 != 0)
	{
		last->left = new Node();
		last = last->left;
		last->chr = *chr;

	}
	else
	{
		last->right = new Node();
		last = last->right;
		last->chr = *chr;
	}
}

void run(Node* now)
{
	for (int i = 0; i < 6; i++)
	{
		addNode(&name[i], now);

		if (map[name[i] - 'A'][i] == 1)
		{
			if ((name[i] - 'A') % 2 != 0) run(now->left);
			else run(now->right);
		}
	}

}

int main()
{
	input();
	run(head);

	return 0;
}