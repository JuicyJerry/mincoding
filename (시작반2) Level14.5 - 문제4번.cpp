#include <iostream>
using namespace std;
struct Product
{
	int strawberry, melon, watermelon;
};


int main() {
	Product A = { 300, 500, 1000 };
	Product B = { 450, 450, 900 };
	Product C = { 200, 150, 700 };

	char mart;
	cin >> mart;

	if (mart == 'A') cout << (A.strawberry + A.melon + A.watermelon) / 3;
	if (mart == 'B') cout << (B.strawberry + B.melon + B.watermelon) / 3;
	if (mart == 'C') cout << (C.strawberry + C.melon + C.watermelon) / 3;

	return 0;
}