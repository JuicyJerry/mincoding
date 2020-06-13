#include <iostream>
using namespace std;
void KFC(char vect[10], int* UpperCaseCnt, int* LowerCaseCnt) {
	for (int i = 0; i < 10; i++) {
		if (vect[i] >= 'A' && vect[i] <= 'Z') *UpperCaseCnt += 1;
		else if (vect[i] >= 'a' && vect[i] <= 'z') *LowerCaseCnt += 1;
	}

}

int main() {
	char vect[10];
	cin >> vect;
	int UpperCaseCnt = 0, LowerCaseCnt = 0;
	KFC(vect, &UpperCaseCnt, &LowerCaseCnt);

	cout << "대문자" << UpperCaseCnt << "개" << endl;
	cout << "소문자" << LowerCaseCnt << "개";
	return 0;
}