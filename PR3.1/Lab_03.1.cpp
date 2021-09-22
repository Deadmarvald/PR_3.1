// Lab_03.1.cpp
// Вольвенко Іван ІТ-12
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної
// Варіант 12

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double A;
	double B;

	cout << "x = "; cin >> x;

	A = 2 * abs(x - 5);
	// 1 спосіб: розгалуження в скороченій формі 
	if (x < -1)
		B = (sin(x) * sin(x)) / (1 + abs(cos(x)));
	if (-1 <= x && x <= 1)
		B = cos(1 / abs(x + 2)) * cos(1 / abs(x + 2));
	if (x > 1)
		B = log(abs(x + 2));

	y = A - B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// 2 спосіб: розгалуження в повній формі
	if (x < -1)
		B = (sin(x) * sin(x)) / (1 + abs(cos(x)));
	else
		if (-1 <= x && x <= 1)
			B = cos(1 / abs(x + 2)) * cos(1 / abs(x + 2));
		else
			B = log(abs(x + 2));

	y = A - B;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}