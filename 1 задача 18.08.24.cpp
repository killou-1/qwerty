#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int r, t;
	double pi = 3.14, S;

	cout << "������� �������� ������� = ";

	cin >> r;

	t = pow(r, 2);

	if (r > 0)
	{
		S = pi * t;
		cout << "������� ����� ����� = " << S << endl;
	}
	else
	{ 
		cout << "������" << endl;

		}

	return 0;



}