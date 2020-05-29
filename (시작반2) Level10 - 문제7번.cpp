#include <iostream>
using namespace std;
int GOP() {
	int input1, input2;
	cin >> input1 >> input2;

	return input1 * input2;
}

int SUM() {
	int input1, input2;
	cin >> input1 >> input2;

	return input1 + input2;
}

int main() {


	int gop = GOP();
	int sum = SUM();
	if (gop > sum) cout << "GOP>SUM";
	else if (gop < sum) cout << "GOP<SUM";
	else cout << "GOP==SUM";


	return 0;
}