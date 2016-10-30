#include <stdio.h>
#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int ElemType;
typedef int status;
// status 是函数的返回值类型，其值是函数结果锥状态代码，如OK等。
// 初始条件，顺序线性表L已经存在，1 <= i <= ListLength(L)
// 操作结果，用e返回L中第i个数据元素的值
typedef struct
{
	ElemType data[MAXSIZE];
	int length; // 线性表当前长度
}SqList;

void union_func(SqList *La, SqList Lb); // 一个带指针，一个不带
void InitList(SqList *L);             // 线性表初始化
void ListEmpty(SqList L);             // 线性表判断是否未空，空返回True, 不为空返回False
void CreatList(SqList *L);            // 创建一个线性表
status GetElem(SqList *L, int i, ElemType e);        // 返回线性表L中i位置元素到e
int LocateElem(SqList L,ElemType e);         // 元素e在线性表L中的位置
status ListInsert(SqList *L, int i, ElemType e);     // 向线性表L的第i个位置插入元素e
status ListDelete(SqList *L, int i, ElemType *e);    // 删除线性表L中第i个位置的元素e
status ListLength(SqList L);            // 线性表元素个数

int main()
{
	
	return 0;
}
void union_func(SqList *La, SqList Lb)
{
	int La_length, Lb_length, i;

	ElemType e;
	La_length = ListLength(*La);
	Lb_length = ListLength(Lb);
	
	for( i=1; i <= Lb_length; i++) {
		GetElem(Lb, i, &e);
		if( !LocateElem(*La, e) ) {
			ListInsert(La, ++La_length, e);
		}
	}
}

status GetElem(SqList *L, int i, ElemType e)
{
	if(ListLength(L)==0 || i>ListLength(L) || i<1) {
		return ERROR;
	}
	*e = L.data[i-1];
	
	return OK;
}
// 插入算法
// 如果插入位置不合理，抛出异常
// 如果线性表长度大于等于数组长度，则抛出异常或动态增加数组容量
// 从后向前遍历到i位置，分别将每一个元素后移一位
// 将要插入的元素填入i位置
// 线性表长度加1

status ListInsert(SqList *L, int i, ElemType e);
{
	int k;
	
	if( L->length == MAXSIZE) {  // 顺序线性表已经满了
		return ERROR;
	}
	if( i<1 || i>L->length+1) { // 当i不在范围时
		return ERROR;
	}
	if( i <= L->length) { // 当i不在表尾
		/* 将要插入位置后数据向后移动一位*/
		for( k=L->length-1; k >= i-1; k--) {
			L->data[k+1] = l->data[k];
		}
	}
	
	L->data[i-1] = e;   // 将新元素插入
	L->length++;
	return OK;
}
// 删除算法
// 初始条件：顺序线性表已经存在，1<=i<=ListLength(L)
status ListDelete(SqList *L, int i, ElemType *e)
{
	
}
