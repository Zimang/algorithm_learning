void insertion_sort(int a[],int n ) {
	int key;
	for (int i = 1; i < n; i++)
	{
		key = a[i];
		int j = i - 1;
		while (j>=0&&a[j]>=key)//С�ڵ�ǰ�ź����Ԫ������ǰ���룬����һ�����Բ��ң��n
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}