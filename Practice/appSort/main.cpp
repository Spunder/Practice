
#include <iostream>
#include"bubbleSort.h"
#include"quickSort.h"
using namespace std;
extern void BubbleSort(int arr[], int n);


#pragma comment(lib,"bubbleSort.lib")

void print(int arr[], int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << "  ";
	}
	cout << endl;
}

int main()
{

	int s[9] = { 3,2,1,4,7,9,6,5,5 };
	cout << "初始序列：";
	print(s, 9);
	BubbleSort(s, 9);
	cout << "冒泡排序结果：";
	print(s, 9);

	
	QuickSort(3, 5, s);
	cout << "快速排序结果：";
	print(s, 9);


	system("pause");
	return 0;
}