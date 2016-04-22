#include <stdio.h>
void main()
{
	int score,x;
	printf ("«Î ‰»Î—ßœ∞≥…º®£∫");
	scanf ("%d",&score);
	x=score/10;
	switch(x)
	{	case 6:printf ("C\n");break;
		case 7:printf ("B\n");break;
		case 8:printf ("B\n");break;
		case 9:printf ("A\n");break;
		case 10:printf ("A\n");break;
		default :printf ("D\n");
	}

}