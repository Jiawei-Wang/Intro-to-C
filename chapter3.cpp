#include "stdafx.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//Q1
	int i1 = 0, sum1 = 0;
	for (i1 = 0;i1 <= 10;i1++)
	{
		sum1 += pow(3, i1);
	}
	printf("%d\n", sum1);

	//Q2
	int i2 = 1,sum2 = 4;
	while (sum2<1000)
	{
		i2++;
		sum2 += 4 * i2*i2;
	}
	printf("%d\n", i2);

	//Q3
	double a1=0,x=0,y=0;
	printf("请输入a的值:");
	scanf_s("%lf", &a1);
	printf("请输入x的值:");
	scanf_s("%lf", &x);
	if (x <= 0)
	{
		y = sqrt(a1*a1 + x * x);
	}
	else y = 3 * a1*x*x + 4 * a1*x - 1;
	printf("y的值为:%6.2lf\n", y);

	//Q4
	int a = 6, b = 15;
	for (a = 6;a <= 30;a++)
	{
		for(b=15;b<=36;b++)
		{
			if(2*a+5*b==126)
			{
				printf("a=%d,b=%d\n", a, b);
			}
		}
	}
}