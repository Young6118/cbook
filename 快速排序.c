#include <stdio.h>
#include <stdlib.h> 
void swap(int *x, int *y) // 交换两个变量的值
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int choose_pivot(int i, int j) // 在序列中选择一个关键元素作轴
{
	return((i + j) / 2);
}

void quicksort(int list[], int m, int n) // 快排函数
{
	int key, i, j, k;
	if (m < n)
	{
		k = choose_pivot(m, n); // 选择关键元素
		swap(&list[m], &list[k]); // 交换变量
		key = list[m]; // 每次选取的key就是数列最后一个元素
		i = m + 1; // i = 1, 2, ...
		j = n;	// n就是序列最后一个元素的下标 n的值被赋给j
		while (i <= j) // 循环从1 开始 遍历到序列最后一个元素
		{
			while ((i <= n) && (list[i] <= key)) // 如果满足i是序列下标和该元素不大于最后一个元素的条件
				i++;							 // i自加 从1 直到加到最大下标
			while ((j >= m) && (list[j] > key))	 // j是序列最后一个元素的下标 j不比0小而且比最后一个元素大
				j--;							// j自减 从最大直到减到0
			if (i < j)							// i从前往后 j从后往前 在i比j小的时候 交换序列中这个元素的值
				swap(&list[i], &list[j]);
		}
		// 交换两个元素的位置
		swap(&list[m], &list[j]);
		// 递归地对较小的数据序列进行排序
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

	// 产生填充序列的随机数
	for (i = 0; i < MAX_ELEMENTS; i++) {
		list[i] = rand();
	}
	printf("进行排序之前的序列:\n");
	printlist(list, MAX_ELEMENTS);

	// sort the list using quicksort
	quicksort(list, 0, MAX_ELEMENTS - 1);

	// print the result
	printf("使用快速排序算法进行排序之后的序列:\n");
	printlist(list, MAX_ELEMENTS);
	return 0;
}