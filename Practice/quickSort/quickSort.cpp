#include"quickSort.h"

void QuickSort(int l, int h, int arr[])
{
	if (l >= h)
	{
		return;
	}
	auto i = l;
	auto j = h;
	auto base = arr[l];
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
	arr[l] = arr[i];
	arr[i] = base;
	QuickSort(l, i - 1, arr);
	QuickSort(i + 1, h, arr);
}
