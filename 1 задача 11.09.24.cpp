
#include <iostream>
#include <cmath>

using namespace std; 

int main()
{
	setlocale(LC_ALL, "Rus");
	int x, y;
	cout << "������� �������� x = ";
	cin >> x;
	cout << "� = " << x << endl;
	y = pow(x, 4);
	cout << "�������� � � 4 ������ =  " << y << endl;
	return 0;

}