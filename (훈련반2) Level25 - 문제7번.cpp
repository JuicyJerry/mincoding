#include <iostream>
using namespace std;
char* temp[15];

struct Node
{
	char name[15];
	Node* Love1;
	Node* Love2;
};

int main()
{
	Node* head;

	// boss
	head = new Node();
	head->name[0] = 'b';
	head->name[1] = 'o';
	head->name[2] = 's';
	head->name[3] = 's';
	head->Love1 = new Node();
	head->Love2 = new Node();

	//son
	head->Love2->name[0] = 's';
	head->Love2->name[1] = 'o';
	head->Love2->name[2] = 'n';
	head->Love2->Love1 = new Node;
	head->Love2->Love2 = new Node;

	//wife
	head->Love1->name[0] = 'w';
	head->Love1->name[1] = 'i';
	head->Love1->name[2] = 'f';
	head->Love1->name[3] = 'e';
	head->Love1->Love1 = head;
	head->Love1->Love2 = head->Love2;

	//girlfriend
	head->Love2->Love1 = new Node();
	head->Love2->Love1->name[0] = 'g';
	head->Love2->Love1->name[1] = 'i';
	head->Love2->Love1->name[2] = 'r';
	head->Love2->Love1->name[3] = 'l';
	head->Love2->Love1->name[4] = 'f';
	head->Love2->Love1->name[5] = 'r';
	head->Love2->Love1->name[6] = 'i';
	head->Love2->Love1->name[7] = 'e';
	head->Love2->Love1->name[8] = 'n';
	head->Love2->Love1->name[9] = 'd';
	head->Love2->Love1->Love1 = head->Love2;
	head->Love2->Love1->Love2 = head->Love2->Love2;


	//boyfriend
	head->Love2->Love2 = new Node();
	head->Love2->Love2->name[0] = 'b';
	head->Love2->Love2->name[1] = 'o';
	head->Love2->Love2->name[2] = 'y';
	head->Love2->Love2->name[3] = 'f';
	head->Love2->Love2->name[4] = 'r';
	head->Love2->Love2->name[5] = 'i';
	head->Love2->Love2->name[6] = 'e';
	head->Love2->Love2->name[7] = 'n';
	head->Love2->Love2->name[8] = 'd';
	head->Love2->Love2->Love1 = head->Love2->Love1;
	head->Love2->Love2->Love2 = NULL;


	cout << head->Love2->Love1->name << endl;
	cout << head->Love2->Love2->name;
	return 0;
}