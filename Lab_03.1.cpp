// Lab_03_1.cpp
// ��������� �����
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ������ �����
// ������ 16

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� � ������������� ����� ������� ������
	double B; // �������� ��������� � ������������� ����� ������� ������

	cout << "x = "; cin >> x;

	A = 5 * exp(3*x);

	// ������������ � ���������� ������
	if (x < -1)
		B = sqrt(2) * pow(x, 3) - 7;
	if (-1 <= x && x <= 3)
		B = 2 * log10(1 - (x / 4));
	if (x >= 3)
		B = cos (fabs(x)) + 3;

	y = A - B;

	cout << endl;
	cout << "1) y = " << y << endl;


	// ������������ � ����� ����
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