#include"selectSort.h"

void selectSort(int arr[],int n)
{
	for (auto i = 0; i < n - 1; i++)
	{
		auto k = i;
		for (auto j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[k])
			{
				k = j;
			}
		}
		auto x = arr[k];
		arr[k] = arr[i];
		arr[i] = x;
	}
}