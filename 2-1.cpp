#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float triangle_area = 0.0, triangle_bottom = 4.0, triangle_height;
	cin >> triangle_height;
	cout << fixed << setprecision(2) << triangle_bottom*triangle_height / 2 << endl;
	return 0;
}