#include "stdafx.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//使用指针进行间接访问的练习
int main()
{
	//Q1:
	int a[8] = { 25,18,36,42,17,54,30,63 };
	int *p = a;
	int c2=0, c3=0, c5=0;
	while (p < a + 8)
	{
		if (*p % 2 == 0)c2++;
		if (*p % 3 == 0)c3++;
		if (*p % 5 == 0)c5++;
		p++;
	}
	printf("%d %d %d\n", c2, c3, c5);

	//Q2：
	int a2[8] = { 6,8,2,5,4,3,5,7 };
	int s = 0;
	int *p2 = a2 + 2;
	while (p2 < a2 + 6)
	{
		s += *p2++;
	}
	while (--p2>=a2+2)
	{
		printf("%d ", *p2);
	}
	printf("\n");
	printf("%d\n", s);

	//Q3：
	int a3[8];
	int s1 = 0,s2 = 0,*p3;
	printf("请输入8个整数：");
	for (p3 = a3;p3 <= a3 +7 ;p3++)
	{
		scanf_s("%d", p3);
	}
	for (p3 = a3;p3 <= a3 + 7;p3++)
	{
		if (*p3 % 2)
		{
			s1 ++;
			
		}
		else s2 ++ ;
	}
	printf("%d %d\n", s1, s2);

	//Q4:
	int x4 = 20, y4 = 40, *p4;
	p4 = &x4;
	printf("%d ", *p4);
	*p4 = x4 + 10;
	p4 = &y4;
	printf("%d\n", *p4);
	*p4 = y4 + 20;
	printf("%d %d\n", x4, y4);
}