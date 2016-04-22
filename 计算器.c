#include <stdio.h>
//函数,读数操作数
int num()
{
double x;
scanf("%d",&x);
return x;
}
//函数,读运算符
char Opt()
{
return getchar();
}
//函数,计算
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
//计算结果放在第一个操作数
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