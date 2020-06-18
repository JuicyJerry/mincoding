#include <iostream>
using namespace std;
struct Product
{
	int strawberry, melon, watermelon;
	int A[3] = { strawberry = 300, melon = 500, watermelon = 1000 };
	int B[3] = { strawberry = 450, melon = 450, watermelon = 900 };
	int C[3] = { strawberry = 200, melon = 150, watermelon = 700 };
};


int main() {
	Product A;
	Product B;
	Product C;

	char mart;
	cin >> mart;
	if (mart == 'A') {
		int sum1 = 0;
		for (int i = 0; i < 3; i++) {
			sum1 += A.A[i];
		}
		cout << sum1 / 3;
	}

	if (mart == 'B') {
		int sum2 = 0;
		for (int i = 0; i < 3; i++) {
			sum2 += B.A[i];
		}
		cout << sum2 / 3;
	}

	if (mart == 'C') {
		int sum3 = 0;
		for (int i = 0; i < 3; i++) {
			sum3 += C.A[i];
		}
		cout << sum3 / 3;
	}



	return 0;
}