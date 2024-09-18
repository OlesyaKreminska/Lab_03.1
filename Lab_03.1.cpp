// Lab_03_1.cpp
// Кремінська Олеся
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної
// Варіант 16

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат – функціонально стала частина виразу
	double B; // проміжний результат – функціонально змінна частина виразу

	cout << "x = "; cin >> x;

	A = 5 * exp(3*x);

	// розгалуження в скороченій формулі
	if (x < -1)
		B = sqrt(2) * pow(x, 3) - 7;
	if (-1 <= x && x <= 3)
		B = 2 * log10(1 - (x / 4));
	if (x >= 3)
		B = cos (fabs(x)) + 3;

	y = A - B;

	cout << endl;
	cout << "1) y = " << y << endl;


	// розгалуження в повінй формі
	if (x < -1)
		B = sqrt(2) * pow(x, 3) - 7;
	else
		if (x >= 3)
			B = cos(fabs(x)) + 3;
		else
			B = 2 * log10(1 - (x / 4));

	y = A - B;

	cout << endl;
	cout << "2) y = " << y << endl;

	cin.get();
	return 0;

}