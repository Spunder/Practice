
#include <iostream>
#include"bubbleSort.h"
#include"quickSort.h"
#include"selectSort.h"

using namespace std;
extern void BubbleSort(int arr[], int n);
extern void selectSort(int arr[], int n);

#pragma comment(lib,"bubbleSort.lib")
#pragma comment(lib,"selectSort.lib")

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
	while (1)
	{
		int s[9] = { 3,2,1,4,7,9,6,5,5 };
		cout << "初始序列：";
		print(s, 9);
		int a;
		cout << "输入序号选择排序方式：\n 1.冒泡排序\n 2.快速排序\n 3.选择排序\n 0.退出\n" << endl;
		cin >> a;

		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			BubbleSort(s, 9);
			cout << "冒泡排序结果：";
			print(s, 9);
			break;

		case 2:
			QuickSort(0, 8, s);
			cout << "快速排序结果：";
			print(s, 9);
			break;

		case 3:
			selectSort(s, 9);
			cout << "选择排序结果： ";
			print(s, 9);
			break;

		default:
			break;
		}
	}

	system("pause");
	return 0;
}
