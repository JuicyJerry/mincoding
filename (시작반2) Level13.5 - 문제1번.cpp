#include <iostream>
using namespace std;
int main() {
	struct PROFILE
	{
		char name[8];
		int age, weight;
	};

	PROFILE int1;
	cin >> int1.name >> int1.age >> int1.weight;
	PROFILE int2;
	cin >> int2.name >> int2.age >> int2.weight;

	cout << int1.name << " & " << int2.name << endl;
	cout << "���" << (int1.age + int2.age) / 2 << "��" << endl;
	cout << "���" << (int1.weight + int2.weight) / 2 << "KG" << endl;

	return 0;
}