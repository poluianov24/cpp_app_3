#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, y;
	int * ptr_x = &x, * ptr_y = &y;

	cout << "Введіть число №1: ";
	cin >> *ptr_x;

	cout << "Введіть число №2: ";
	cin >> *ptr_y;

	if (x > y)
	{
		cout << endl << "Більшим числом є: " << *ptr_x << endl;
	}
	else
	{
		cout << endl << "Більшим числом є: " << *ptr_y << endl;
	}

	return 0;
}
