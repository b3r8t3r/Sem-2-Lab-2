#include <iostream>
#include <math.h>
#define pi 3.14
using namespace std;

int main() {
	int alpha = 0;
	float alpha_rad;
	cin >> alpha;
	alpha_rad = (pi * alpha) / 180;
	cout << alpha_rad << endl;
	return 0;
}