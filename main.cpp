#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int COW = 5;
	int arr[COW]{ 4, 12, 55, 0, 45 };
	int* ptr_arr_1 = arr;

	cout << "����� ��: ";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << *(ptr_arr_1 + i) << " ";
	}

	cout << "\n\n����� ����: ";

	//��������� �������� ������ � ����������� �������
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		cout << *(ptr_arr_1 + (sizeof(arr) / sizeof(arr[0]) - 1) - i) << " ";
	}

	cout << endl;

	return 0;
}
