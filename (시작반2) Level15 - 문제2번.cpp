#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	cout << "����" << num / 1000 << endl;
	cout << "����" << (num % 1000) / 100 << endl;
	cout << "����" << (num % 100) / 10 << endl;
	cout << "����" << (num % 10) / 1 << endl;

	return 0;
}
/*
5127 / 1000 = 5.xx
5127 / 100 = 52.xx
5127 / 10 = 527.xx
5127 / 1 = 5127

5127 % 1000 = 127.xx
5127 % 100 = 27.xx
5127 % 10 = 7.xxx
5127 % 1 = 0
*/