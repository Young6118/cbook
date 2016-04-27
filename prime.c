# include <stdio.h>

bool IsPrime(int val)
{	
	int i;

	for (i=2; i<val;++i)
	{
		if (val%i == 0)
		break;
	}	
	
	if (i == val)
		return true;
	else 
		return false;
}


int main(void)
{
	int m;
	int i;

	scanf("%d", &m);
	
	if ( IsPrime(m) )
		printf("Yes!/n");
	else
		printf("No!/n");
	return 0;


}