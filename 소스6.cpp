#include <iostream>
using namespace std;

int main()
{
	int x;


	for (int i = 0; i < 4; i++) {
		cin >> x;

		if (x < 20) {
			cout << "�� ū���� �Է��ϼ���" << endl;
		}
		else if (x > 20) {
			cout << "�� �������� �Է��ϼ���" << endl;
		}
		else if (x == 20) {
			cout << "�����Դϴ�" << endl;
		}
	}
	return 0;
}