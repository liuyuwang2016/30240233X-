#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int a, b, c;
	cout << "������ax^2+bx+c=0��a,b,cֵ" << endl;
	cin >> a >> b >> c;
	float x1 = ((-b + sqrt(b * b - 4 * a*c)) / 2 * a);
	float x2 = ((-b - sqrt(b * b - 4 * a*c)) / 2 * a);
	if (x1 >= x2)
		cout << fixed << setprecision(5) << x1 << endl;
	else if (x1 = x2)
		cout << fixed << setprecision(5) << x1 << endl;
	else
		cout << fixed << setprecision(5) << x2 << endl;
	return 0;
}