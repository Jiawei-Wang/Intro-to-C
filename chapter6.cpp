#include "stdafx.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//Q1：求数组中所有元素的平方之和
int function1(int a[], int n)
{
	int i = 0,s=0;
	for (i = 0;i < n;i++)
	s += a[i] * a[i];
	return s;
}

//Q2：求数组中所有奇数元素和偶数元素的个数
int c1=0, c2=0;
void function2(int a[], int n)
{
	int i;
	c1 = c2 = 0;
	for (i = 0;i < n;i++)
	{
		if (a[i] % 2)
		{c1++;}
		else c2++;
	}
}

//Q3：使用递归求两个自然数的最大公约数
int function3(int m, int n)
{
	int r;
	while (1)
	{
		if (n == 0)return m;
		r = m % n;
		m = n;
		n = r;
	}
}

int main()
{
	int n1, a1[100];
	printf("请输入数组中元素的个数：");
	do {scanf_s("%d", &n1);} 
	while (n1 <= 0);
	printf("请依次输入%d个元素：", n1);
	for (int i = 0;i < n1;i++)
	{scanf_s("%d", &a1[i]);}
	int sum1=function1(a1, n1);
	printf("平方之和为：%d\n",sum1);

	int a2[100], n2=0;
	printf("请输入数组中元素的个数：");
	do{scanf_s("%d", &n2);} 
	while (n2 <= 0);
	printf("请依次输入%d个元素：", n2);
	for (int i = 0;i < n2;i++)
	{scanf_s("%d", &a2[i]);}
	function2(a2, n2);
	printf("奇数个数为：%d\n偶数个数为：%d\n", c1, c2);

	int x = 0, y = 0;
	printf("请输入一大一小两个自然数：");
	scanf_s("%d%d", &x, &y);
	int z=function3(x, y);
	printf("最大公约数为：%d", z);
}