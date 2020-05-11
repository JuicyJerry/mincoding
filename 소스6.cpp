#include <iostream>
using namespace std;

int main()
{
	int x;


	for (int i = 0; i < 4; i++) {
		cin >> x;

		if (x < 20) {
			cout << "더 큰수를 입력하세요" << endl;
		}
		else if (x > 20) {
			cout << "더 작은수를 입력하세요" << endl;
		}
		else if (x == 20) {
			cout << "정답입니다" << endl;
		}
	}
	return 0;
}