#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	double E = 2.718282;
	cout << "x = "; cin >> x;

	A = (x * x) / 2,1 + sin(fabs(x));
	// спосіб 1: розгалуження в скороченій формі
	if (x <= -5)
		B = 1 / tan(exp(x));
	if (-5 < x && x < 0)
		B = 2 - x * x * x / (fabs(x) + 1);
	if (x >= 0)
		B = log10(sqrt(fabs(x) - x * x / 2));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x <= -5)
		B = 1 / tan(exp(x));
	else
		if (-5 < x && x < 0)
			B = 2 - x * x * x / (fabs(x) + 1);
		else
			B = log10(sqrt(fabs(x) - x * x / 2));
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}