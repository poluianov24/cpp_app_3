#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int COW = 10;
	int arr[COW]{44,1,55}, res=0;
	int* ptr_arr = arr;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		res += *(ptr_arr + i);
	}

	cout << "Сума елементів масиву складає: " << res << endl;
	return 0;
}
