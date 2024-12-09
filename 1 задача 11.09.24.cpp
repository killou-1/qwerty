
#include <iostream>
#include <cmath>

using namespace std; 

int main()
{
	setlocale(LC_ALL, "Rus");
	int x, y;
	cout << "¬ведите значение x = ";
	cin >> x;
	cout << "х = " << x << endl;
	y = pow(x, 4);
	cout << "«начание х в 4 степеи =  " << y << endl;
	return 0;

}