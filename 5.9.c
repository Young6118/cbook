
#include <stdio.h>
void main()
{	int i;
	float aver,score=0,sum=0;
	for (i=1;score>=0;i++)
	{
		printf ("�������%d��ѧ���ĳɼ���",i);
		scanf ("%f",&score);
		if (score<0)
			break;
		if (score<60)
			printf ("��ѧ��%f�ֲ�����\n",score);
		sum+=score;}
	aver=sum/(i-1);
	printf("ѧ����ƽ���ɼ�Ϊ��%f",aver);
}