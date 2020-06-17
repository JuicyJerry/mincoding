#include <iostream>
using namespace std;
int main() {
	struct Fruits
	{
		int strawberry, melon, watermelon, avg;
	};

	Fruits Amart;
	Amart.strawberry = 300;
	Amart.melon = 500;
	Amart.watermelon = 1000;
	Amart.avg = (Amart.strawberry + Amart.melon + Amart.watermelon) / 3;

	Fruits Bmart;
	Bmart.strawberry = 450;
	Bmart.melon = 450;
	Bmart.watermelon = 900;
	Bmart.avg = (Bmart.strawberry + Bmart.melon + Bmart.watermelon) / 3;

	Fruits Cmart;
	Cmart.strawberry = 200;
	Cmart.melon = 150;
	Cmart.watermelon = 700;
	Cmart.avg = (Cmart.strawberry + Cmart.melon + Cmart.watermelon) / 3;

	char whichMart;
	cin >> whichMart;
	cout << whichMart.avg;


	return 0;
}