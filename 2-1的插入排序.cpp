void insertion_sort(int a[],int n ) {
	int key;
	for (int i = 1; i < n; i++)
	{
		key = a[i];
		int j = i - 1;
		while (j>=0&&a[j]>=key)//小于当前排好序的元素则向前插入，这是一个线性查找，最坏n
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}