#include <stdio.h>
#include <stdlib.h> 
void swap(int *x, int *y) // ��������������ֵ
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int choose_pivot(int i, int j) // ��������ѡ��һ���ؼ�Ԫ������
{
	return((i + j) / 2);
}

void quicksort(int list[], int m, int n) // ���ź���
{
	int key, i, j, k;
	if (m < n)
	{
		k = choose_pivot(m, n); // ѡ��ؼ�Ԫ��
		swap(&list[m], &list[k]); // ��������
		key = list[m]; // ÿ��ѡȡ��key�����������һ��Ԫ��
		i = m + 1; // i = 1, 2, ...
		j = n;	// n�����������һ��Ԫ�ص��±� n��ֵ������j
		while (i <= j) // ѭ����1 ��ʼ �������������һ��Ԫ��
		{
			while ((i <= n) && (list[i] <= key)) // �������i�������±�͸�Ԫ�ز��������һ��Ԫ�ص�����
				i++;							 // i�Լ� ��1 ֱ���ӵ�����±�
			while ((j >= m) && (list[j] > key))	 // j���������һ��Ԫ�ص��±� j����0С���ұ����һ��Ԫ�ش�
				j--;							// j�Լ� �����ֱ������0
			if (i < j)							// i��ǰ���� j�Ӻ���ǰ ��i��jС��ʱ�� �������������Ԫ�ص�ֵ
				swap(&list[i], &list[j]);
		}
		// ��������Ԫ�ص�λ��
		swap(&list[m], &list[j]);
		// �ݹ�ضԽ�С���������н�������
		quicksort(list, m, j - 1);
		quicksort(list, j + 1, n);
	}
}

void printlist(int list[], int n)
{
	int i;
	for (i = 0;i<n;i++)
		printf("%d\t", list[i]);
}

int main()
{
	const int MAX_ELEMENTS = 10;
	int list[MAX_ELEMENTS];

	int i = 0;

	// ����������е������
	for (i = 0; i < MAX_ELEMENTS; i++) {
		list[i] = rand();
	}
	printf("��������֮ǰ������:\n");
	printlist(list, MAX_ELEMENTS);

	// sort the list using quicksort
	quicksort(list, 0, MAX_ELEMENTS - 1);

	// print the result
	printf("ʹ�ÿ��������㷨��������֮�������:\n");
	printlist(list, MAX_ELEMENTS);
	return 0;
}