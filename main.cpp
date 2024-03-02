#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	int* ptr_x = &x;

	cout << "¬вед≥ть число: ";
	cin >> *ptr_x;

	if (x < 0)
	{
		cout << endl << "„исло: " << *ptr_x << " - Ї в≥д'Їмним." << endl;
	}
	else
	{
		cout << endl << "„исло: " << *ptr_x << " - Ї додатн≥м." << endl;
	}

	return 0;
}
