#include"quickSort.h"

void QuickSort(int left, int right, int arr[])
{
	if (left >= right)
	{
		return;
	}
	auto i = left;
	auto j = right;
	auto base = arr[left];
	while (i < j) 
	{
		while (arr[j] >= base && i < j)
		{
			j--;
		}
		while (arr[i] <= base && i < j)
		{
			i++;
		}
		if (i < j)
		{
			auto temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	arr[left] = arr[i];
	arr[i] = base;
	QuickSort(left, i - 1, arr);
	QuickSort(i + 1, right, arr);
}
