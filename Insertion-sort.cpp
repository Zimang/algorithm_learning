// Insertion-sort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "标头.h"
using namespace std;
extern void insertion_sort(int a[], int n);
int main()
{
    void insertion_sort(int a[], int len);
    cout << "插入排序，你要输入几个整数？\n";
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
//insertion_sort(a, n);
    
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << endl;
    }
    return 1;
}
