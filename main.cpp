#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	int* ptr_x = &x;

	cout << "������ �����: ";
	cin >> *ptr_x;

	if (x < 0)
	{
		cout << endl << "�����: " << *ptr_x << " - � ��'�����." << endl;
	}
	else
	{
		cout << endl << "�����: " << *ptr_x << " - � �������." << endl;
	}

	return 0;
}
