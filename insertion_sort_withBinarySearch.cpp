//
// Ŀ�ģ�������������Ϊ���ֲ��ң������Ա��������Ų�����õ�ʱ��
#include "��ͷ.h"
#include "iostream"
void ISwithBinarySearch(int a[], int n) {
	int key;
	list head = nullptr;
	for (int i = 1; i < n; i++)
	{
		key = a[i];
		int j = i - 1;//���ֱȽϣ�lg(n)
		while (j >= 0 && a[j] >= key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}