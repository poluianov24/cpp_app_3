#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, y;
	int * ptr_x = &x, * ptr_y = &y;

	cout << "������ ����� �1: ";
	cin >> *ptr_x;

	cout << "������ ����� �2: ";
	cin >> *ptr_y;

	if (x > y)
	{
		cout << endl << "������� ������ �: " << *ptr_x << endl;
	}
	else
	{
		cout << endl << "������� ������ �: " << *ptr_y << endl;
	}

	return 0;
}
