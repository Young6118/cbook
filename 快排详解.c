//�������������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #define MAX_ELEMENTS 10
// int MAX_ELEMENTS=10;
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

void printlist(int list[], int n)
{
	int i;
	for (i = 0;i<n;i++)
		printf("%d\t", list[i]);
}
void quicksort(int list[], int m, int n) // ���ź���
{
	int key, i, j, k;
	if (m < n)
	{
		printf("\n\ni=%d��j=%dͨ������(i+j)/2�õ�", m, n);
		k = choose_pivot(m, n); // ѡ��ؼ�Ԫ��
		printf("�ؼ�Ԫ�ص��±�k=%d\n", k);
		printf("������m=%d��Ԫ��%d �� ��k=%d��Ԫ��%d:\n", m,list[m], k,list[k]);
		swap(&list[m], &list[k]); // ��������
		printlist(list, 10);
		key = list[m]; // ÿ��ѡȡ��key�������е�һ��Ԫ��
		i = m + 1; // i = 1, 2, ...
		j = n;	// n�����������һ��Ԫ�ص��±� n��ֵ������j
		while (i <= j) // ѭ����1 ��ʼ �������������һ��Ԫ��
		{
			while ((i <= n) && (list[i] <= key)){
					printf("\ni=%d, n=%d, list[i]=%d, key=%d, i <= n && list[i] <= key", i, n, list[i], key);
					i++;
					printf("  i�Լӵõ�i=%d\n", i);
			} // �������i�������±�͸�Ԫ�ز��������һ��Ԫ�ص�����
											 // i�Լ� ��1 ֱ���ӵ�����±�
			while ((j >= m) && (list[j] > key))	{
printf("\n j=%d, m=%d, list[j]=%d, key=%d, (j >= m) && (list[j] > key)", j, m, list[j], key);
j--;
printf("  j�Լ��õ�j=%d\n", j);
			} // j���������һ��Ԫ�ص��±� j����0С���ұ����һ��Ԫ�ش�
											// j�Լ� �����ֱ������0
			if (i < j)	{						// i��ǰ���� j�Ӻ���ǰ ��i��jС��ʱ�� �������������Ԫ�ص�ֵ
				printf("\ni<j ���� ");
				printf("������i=%d��Ԫ��%d�͵�j=%d��Ԫ��%d:\n", i,list[i], j,list[j]);
				swap(&list[i], &list[j]);
				putchar('\n');
				printlist(list, 10);
				putchar('\n');
			}
		}
		// ��������Ԫ�ص�λ��
		putchar('\n');
		printf("������m=%d��Ԫ��%d�͵�j=%d��Ԫ��%d:\n", m,list[m], j,list[j]);
		swap(&list[m], &list[j]);
		printlist(list, 10);
		// �ݹ�ضԽ�С���������н�������
		quicksort(list, m, j - 1);
		quicksort(list, j + 1, n);
	}
}


int main()
{
	const int MAX_ELEMENTS = 10;
	int list[MAX_ELEMENTS];

	int i = 0;
	srand((int)time(0));
	// ����������е������
	for (i = 0; i < MAX_ELEMENTS; i++) {
		list[i] = (int)(10.0*rand()/(RAND_MAX+1.0));
	}
	printf("��������֮ǰ������:\n");
	printlist(list, MAX_ELEMENTS);
	putchar('\n');
	// sort the list using quicksort
	quicksort(list, 0, MAX_ELEMENTS - 1);

	// print the result
	printf("\nʹ�ÿ��������㷨��������֮�������:\n");
	printlist(list, MAX_ELEMENTS);
	return 0;
}
