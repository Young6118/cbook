#include <stdio.h>
//����,����������
int num()
{
double x;
scanf("%d",&x);
return x;
}
//����,�������
char Opt()
{
return getchar();
}
//����,����
int caculate(int op1 ,int op2 ,char opt)
{
if(opt=='+')return op1+op2;
if(opt=='-')return op1-op2;
if(opt=='*')return op1*op2;
if(opt=='/')return op1/op2;
return 0;
}
void main()
{
int op1,op2;
char opt;
//���������ڵ�һ��������
op1 = num();
while(1)
{
opt = Opt();
if ( opt == '=' ) break;
op2 = num();
op1 = caculate(op1,op2,opt);
}
printf("%d\n",op1);
}