#include <iostream>
using namespace std;

struct Node
{
	int x;
	Node* left;
	Node* right;
};

int main()
{
	Node* head;
	head = new Node;
	head->x = 3;
	head->left = new Node;
	head->left->x = 7;
	head->left->left = NULL;
	head->left->right = NULL;

	head->right = new Node;
	head->right->x = 6;
	head->right->left = new Node;
	head->right->right = NULL;
	head->right->left->x = 2;
	head->right->left->left = NULL;
	head->right->left->right = NULL;

	return 0;
}