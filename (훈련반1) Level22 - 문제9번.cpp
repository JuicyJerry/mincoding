#include <iostream>
#include <cstring>
using namespace std;

char vect[5][10] = {
	"Jason", "Dr.tom", "EXEXI", "GK12P", "POW"
};

char input[10];

int main()
{
	int flag = 0;
	cin >> input;
	for (int i = 0; i < 5; i++) {
		if ((strcmp(input, vect[i])) == 0) {
			flag = 1;
			break;
		}
	}

	if (flag == 1) cout << "��ȣ����";
	else cout << "��ȣƲ��";

	return 0;
}