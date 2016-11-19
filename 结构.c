#include<stdio.h>
struct date{
	int year;
	int month;
 int day;
};
int main()
{
 struct date point={2016,12,15};
 struct date p={.month=1, .day=1};
 struct date p1 = (struct date){2, 5, 10};
	struct date p2;
	p2 = p1;
	return 0;
}
