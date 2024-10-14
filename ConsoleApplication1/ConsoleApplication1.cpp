#include <iostream>
#include"Header.h"
using namespace std;

int main()
{
	int data[] = { 12, 4, 7, 18, 22 };
	int data2[] = { 5, 6, 10, 11, 17 };
	constexpr size_t _size = sizeof(data) / sizeof(data[0]);
	constexpr size_t _size2 = sizeof(data2) / sizeof(data2[0]);
	int result[_size + _size2];

	addToArray(data, _size, data2, _size2, result);
	_sort(result, (_size + _size2));
	for (size_t i = 0; i < (_size + _size2); i++)
	{
		cout << result[i] << endl;
	}
}
