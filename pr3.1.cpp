// Lab03.1.cpp
// ����������� �����
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ������ �����.
// ������ 9

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;
	A = 2 * fabs(x) * fabs(x) * fabs(x);
	// ����� 1: ������������ � ���������� ����
	if (x <= -0.1)
		B = 5 * cos(18 * x);
	if (-0.1 < x && 1.2 < x)
		B = atan((x + 2) / 5);
	if (1.2 <= x)
		B = (cos(x) + 18) / (sin(x) + 18);
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ������ ����
	if (x <= -0.1)
		B = 5 * cos(18 * x);
	else
		if (1.2 <= x)
			B = (cos(x) + 18) / (sin(x) + 18);
		else
			B = atan((x + 2) / 5);
	y = A - B;
	cout << endl;
	cout << "2) y = " << y << endl;
}













		








