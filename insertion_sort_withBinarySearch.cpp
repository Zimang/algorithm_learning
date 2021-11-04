//
// 目的：将线性搜索改为二分查找，用线性表减少数组挪移所用的时间
#include "标头.h"
#include "iostream"
void ISwithBinarySearch(int a[], int n) {
	int key;
	list head = nullptr;
	for (int i = 1; i < n; i++)
	{
		key = a[i];
		int j = i - 1;//二分比较，lg(n)
		while (j >= 0 && a[j] >= key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}