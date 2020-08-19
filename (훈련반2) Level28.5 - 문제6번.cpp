#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char str[10];
	int hash[100] = { 0 };
	cin >> str;
	for (int i = 0; i < strlen(str); i++) {
		hash[str[i]]++;
	}
	for (int i = 65; i < 100; i++) {
		if (hash[i] >= 2)
			cout << char(i);
	}
	return 0;
}