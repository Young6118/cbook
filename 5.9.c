
#include <stdio.h>
void main()
{	int i;
	float aver,score=0,sum=0;
	for (i=1;score>=0;i++)
	{
		printf ("请输入第%d个学生的成绩：",i);
		scanf ("%f",&score);
		if (score<0)
			break;
		if (score<60)
			printf ("该学生%f分不及格\n",score);
		sum+=score;}
	aver=sum/(i-1);
	printf("学生的平均成绩为：%f",aver);
}