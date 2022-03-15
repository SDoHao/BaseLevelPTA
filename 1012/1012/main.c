#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a,re;
	int i = 0,sum1 = 0, sum2 = 0, op2 = 1, count3 = 0, sum4 = 0, count4 = 0, max5 = 0;
	while (scanf("%d", &a) != EOF)
	{
		re = a % 5;
		if (re == 0 &&  ((a & 1) == 0))
		{
			sum1 += a;
		}
		else if (re == 1)
		{
			sum2 = sum2 + op2 * a;
			op2 *= -1;
		}
		else if (re == 2)
		{
			count3++;
		}
		else if (re == 3)
		{
			sum4 += a;
			count4++;
		}
		else if (re == 4)
		{
			if (a > max5)
				max5 = a;
		}
	}
	printf("%d %d %d %.1f %d",sum1,sum2,count3,sum4 / (1.0 * count4),max5);
	return 0;
}