#include <iostream>
using namespace std;
int main() {
	struct NATION
	{
		int distance;
	};
	NATION A;
	NATION B;
	NATION C;
	NATION D;
	NATION E;
	NATION F;
	NATION G;

	A.distance = 4;
	B.distance = 2;
	C.distance = 5;
	D.distance = 1;
	E.distance = 6;
	F.distance = 7;
	G.distance = 3;

	int nation_distance[7] =
	{
		A.distance, B.distance, C.distance, D.distance, E.distance, F.distance, G.distance
	};

	char ch1, ch2;
	cin >> ch1 >> ch2;

	int ch1Index = ch1 - 'A';
	int ch2Index = ch2 - 'A';
	int TwoNationsDistance1 = 0;
	int TwoNationsDistance2 = 0;
	int position1 = ch1Index + 1;
	int position2 = ch2Index + 1;

	if (ch2Index > ch1Index) {
		for (int i = ch1Index; i < ch2Index - 1; i++) {
			TwoNationsDistance1 += nation_distance[position1];
			position1++;
		}
		cout << TwoNationsDistance1;
	}
	else if (ch1Index > ch2Index) {
		for (int i = ch2Index; i < ch1Index - 1; i++) {
			TwoNationsDistance2 += nation_distance[position2];
			position2++;
		}
		cout << TwoNationsDistance2;
	}



	return 0;
}