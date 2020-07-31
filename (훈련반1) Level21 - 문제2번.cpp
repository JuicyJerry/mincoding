#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char id[100];
	char password[100];
	cin >> id >> password;

	if (strcmp(id, "qlqlaqkq") == 0 && strcmp(password, "tkaruqtkf") == 0) cout << "LOGIN";
	else cout << "INVALID";

	return 0;
}