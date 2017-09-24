#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float M = 0.0, r = 0.0;
	cin >> M >> r;
	double Money = M*pow(1 + r / 100.0, 35);
	cout << fixed << setprecision(2) << Money << endl;
	return 0;
}