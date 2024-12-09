#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int r, t;
	double pi = 3.14, S;

	cout << "Введите значение радиуса = ";

	cin >> r;

	t = pow(r, 2);

	if (r > 0)
	{
		S = pi * t;
		cout << "Площадь круга равна = " << S << endl;
	}
	else
	{ 
		cout << "Ошибка" << endl;

		}

	return 0;



}