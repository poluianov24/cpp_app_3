#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, y, save;
	int* ptr_x = &x, * ptr_y = &y;

	cout << "Введіть числове значення (x): ";
	cin >> *ptr_x;

	cout << "Введіть числове значення (y): ";
	cin >> *ptr_y;

	save = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = save;

	cout << endl << "Наразі значення (x) = " << *ptr_x << endl;
	cout << "Наразі значення (y) = " << *ptr_y << endl;

	return 0;
}
