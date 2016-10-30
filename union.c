#include <stdio.h>
#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int ElemType;
typedef int status;
// status �Ǻ����ķ���ֵ���ͣ���ֵ�Ǻ������׶״̬���룬��OK�ȡ�
// ��ʼ������˳�����Ա�L�Ѿ����ڣ�1 <= i <= ListLength(L)
// �����������e����L�е�i������Ԫ�ص�ֵ
typedef struct
{
	ElemType data[MAXSIZE];
	int length; // ���Ա�ǰ����
}SqList;

void union_func(SqList *La, SqList Lb); // һ����ָ�룬һ������
void InitList(SqList *L);             // ���Ա��ʼ��
void ListEmpty(SqList L);             // ���Ա��ж��Ƿ�δ�գ��շ���True, ��Ϊ�շ���False
void CreatList(SqList *L);            // ����һ�����Ա�
status GetElem(SqList *L, int i, ElemType e);        // �������Ա�L��iλ��Ԫ�ص�e
int LocateElem(SqList L,ElemType e);         // Ԫ��e�����Ա�L�е�λ��
status ListInsert(SqList *L, int i, ElemType e);     // �����Ա�L�ĵ�i��λ�ò���Ԫ��e
status ListDelete(SqList *L, int i, ElemType *e);    // ɾ�����Ա�L�е�i��λ�õ�Ԫ��e
status ListLength(SqList L);            // ���Ա�Ԫ�ظ���

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
// �����㷨
// �������λ�ò������׳��쳣
// ������Ա��ȴ��ڵ������鳤�ȣ����׳��쳣��̬������������
// �Ӻ���ǰ������iλ�ã��ֱ�ÿһ��Ԫ�غ���һλ
// ��Ҫ�����Ԫ������iλ��
// ���Ա��ȼ�1

status ListInsert(SqList *L, int i, ElemType e);
{
	int k;
	
	if( L->length == MAXSIZE) {  // ˳�����Ա��Ѿ�����
		return ERROR;
	}
	if( i<1 || i>L->length+1) { // ��i���ڷ�Χʱ
		return ERROR;
	}
	if( i <= L->length) { // ��i���ڱ�β
		/* ��Ҫ����λ�ú���������ƶ�һλ*/
		for( k=L->length-1; k >= i-1; k--) {
			L->data[k+1] = l->data[k];
		}
	}
	
	L->data[i-1] = e;   // ����Ԫ�ز���
	L->length++;
	return OK;
}
// ɾ���㷨
// ��ʼ������˳�����Ա��Ѿ����ڣ�1<=i<=ListLength(L)
status ListDelete(SqList *L, int i, ElemType *e)
{
	
}
