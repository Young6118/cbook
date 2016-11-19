#include<stdio.h>

int RabbinMillerTest( unsigned n )
{
    if (n<2)
    {
         // С��2���������Ǻ���Ҳ��������
        return 0;
    }
    const unsigned nPrimeListSize=sizeof(g_aPrimeList)/sizeof(unsigned);//��������Ԫ�ظ���
    for(int i=0;i<nPrimeListSize;++i)
    {
        // �����������е����Ե�ǰ���������ж�
        if (n/2+1<=g_aPrimeList[i])
        {
            // ����Ѿ�С�ڵ�ǰ�������������һ��������
            return 1;
        }
        if (0==n%g_aPrimeList[i])
        {
            // ����Ϊ0��˵��һ����������
            return 0;
        }
    }
    // �ҵ�r��m��ʹ��n = 2^r * m + 1;
    int r = 0, m = n - 1; // ( n - 1 ) һ���Ǻ���
    while ( 0 == ( m & 1 ) )
    {
        m >>= 1; // ����һλ
        r++; // ͳ�����ƵĴ���
    }
    const unsigned nTestCnt = 8; // ��ʾ���в��ԵĴ���
    for ( unsigned i = 0; i < nTestCnt; ++i )
    {
        // ������������в��ԣ�
        int a = g_aPrimeList[ rand() % nPrimeListSize ];
        if ( 1 != Montgomery( a, m, n ) )
        {
            int j = 0;
            int e = 1;
            for ( ; j < r; ++j )
            {
                if ( n - 1 == Montgomery( a, m * e, n ) )
                {
                    break;
                }
                e <<= 1;
            }
            if (j == r)
            {
                return 0;
            }
        }
    }
    return 1;
}
int IsPrime3(unsigned n)
{
    if ( n < 2 )
    {
        // С��2���������Ǻ���Ҳ��������
        throw 0;
    }
    static unsigned aPrimeList[] = {
        2, 3, 5, 7, 11, 17, 19, 23, 29, 31, 41,
        43, 47, 53, 59, 67, 71, 73, 79, 83, 89, 97
    };
    const int nListNum = sizeof(aPrimeList) / sizeof(unsigned);
    for (int i=0;i<nListNum;++i)
    {
        // �����������е����Ե�ǰ���������ж�
        if (1!=Montgomery(aPrimeList[i],n-1,n)) // �ɸ������㷨
        {
            return false;
        }
    }
    return true;
}
int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
	  	if(RabbinMillerTest(n))
	  		printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
