#pragma once
void addToArray(int  arr[], int _size, int arr2[], int _size2, int result[]) {
	for (int i = 0; i < _size; ++i)
	{
		result[i] = arr[i];
	}

	for (int i = 0; i < _size2; ++i)
	{
		if (arr[i] != arr2[i])
		{
			result[_size + i] = arr2[i];
		}
	}
}

void _sort(int* arr, int _size)
{
	int kor = 0;
	int temp = 0;
	for (int i = 0; i < _size; i++)
	{
		kor = i;
		for (int k = 0; k < _size; k++)
		{
			if (arr[kor] < arr[k])
			{
				kor = k;
				temp = arr[i];
				arr[i] = arr[kor];
				arr[kor] = temp;
			}
		}
	}
}
