#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, y, res;
	double * ptr_x = &x, * ptr_y = &y, *ptr_res = &res;
	char z;
	char * ptr_z = &z;


	cout << "\n\tКалькулятор: \n\t\tВведіть число №1: ";
	cin >> *ptr_x;

	cout << "\t\tОберіть операцію (+ - * /): ";
	cin >> *ptr_z;

	cout << "\t\tВведіть число №2: ";
	cin >> *ptr_y;

	switch (*ptr_z) 
	{
	case '+':
		*ptr_res = *ptr_x + *ptr_y;
		break;
	
	case '-':
		*ptr_res = *ptr_x - *ptr_y;
		break;
	
	case '*':
		*ptr_res = *ptr_x * *ptr_y;
		break;
	
	case '/':
		if (*ptr_y == 0)
		{
			cout << "\t\tПомилка!!! Ділення на 0 неможливе." << endl;
			return 0;
		}
		*ptr_res = *ptr_x / *ptr_y;
		break;

	default:
		cout << "Некоректно обрана операція!!!" << endl;
		break;
	}

	cout << "Результат: " << *ptr_res;

	return 0;
}