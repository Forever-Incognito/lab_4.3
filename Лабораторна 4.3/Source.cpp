// Lab_03_2.cpp
// < Маковського Андрія >
// Лабораторна робота No 4.3
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 18

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a;
	double b;
	double c;
	double x;
	double xp;
	double xk;
	double dx;
	double F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk) {
	if (x < 0 && b != 0)
			F = a * x * x - b * x * x;
		if (x > 0 && b == 0)
			F = (x - a) / (x - c);
		if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
			F = (x + 5) / (c * (x - 10));
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}
