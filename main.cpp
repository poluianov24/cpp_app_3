#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int COW = 5;
	int arr_1[COW]{ 4, 12, 55, 0, 45}, arr_2[COW]{};
	int* ptr_arr_1 = arr_1, * ptr_arr_2 = arr_2;

	cout << "����� �1: ";
	for (int i = 0; i < sizeof(arr_1) / sizeof(arr_1[0]); i++)
	{
		cout << *(ptr_arr_1 + i) << " ";
	}

	cout << "\t����� �2: ";
	for (int i = 0; i < sizeof(arr_2) / sizeof(arr_2[0]); i++)
	{
		cout << *(ptr_arr_2 + i) << " ";
	}

	//��������� ��������
	for (int i = 0; i < sizeof(arr_1) / sizeof(arr_1[0]); i++)
	{
		*(ptr_arr_2 + i) = *(ptr_arr_1 + i);
	}

	cout << "\n\n����� �1: ";
	for (int i = 0; i < sizeof(arr_1) / sizeof(arr_1[0]); i++)
	{
		cout << *(ptr_arr_1 + i) << " ";
	}

	cout << "\t����� �2: ";
	for (int i = 0; i < sizeof(arr_2) / sizeof(arr_2[0]); i++)
	{
		cout << *(ptr_arr_2 + i) << " ";
	}
	cout << endl;

	return 0;
}
