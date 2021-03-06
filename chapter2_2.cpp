#include "stdafx.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//Q1:计算机随机出题给用户，并打分
	const int N = 5;
	int i1, x, y, z, c = 0;
	srand(time(0));
	for (i1 = 1;i1 <= N;i1++)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		printf("%d+%d=", x, y);
		scanf_s("%d", &z);
		if (x + y == z)
		{
			c++;
		}
	}
	printf("满分为5，你的最终得分：%d\n", c);

	//Q2：打印正弦/余弦值
	const double RAD = 3.1415926 / 180;
	int i2 = 0;
	printf("%10s%10s%10s\n", "angle", "sin", "con");
	while (i2 <= 90)
	{
		printf("%10d%10.2lf%10.2lf\n", i2, sin(i2*RAD), cos(i2*RAD));
		i2 += 5;
	}

	//Q3：数字位反向排序，并输出
	int num, rem;
	printf("请输入一个正整数：");
	scanf_s("%d", &num);
	do {
		rem = num % 10;
		num /= 10;
		printf("%d", rem);
	} while (num > 0);
	printf("\n");

	//Q4:打印字母的ASCII码
	char c1 = 'A', d1 = 'a', c2 = 'F', ch;
	for (ch = c1;ch <= c2;ch++, d1++)
	{
		printf("%c:%d ", ch, ch);
		printf("%c:%d\n", d1, d1);
	}

	//Q5:计算机出题用户作答
	int q, w, r = 0;
	double e = 0.0;
	printf("请输入两个整数：");
	scanf_s("%d%d", &q, &w);
	printf("%d+%d=", q, w);
	scanf_s("%lf", &e);
	if (q + w == e)r++;
	printf("%d-%d=", q, w);
	scanf_s("%lf", &e);
	if (q - w == e)r++;
	printf("%d*%d=", q, w);
	scanf_s("%lf", &e);
	if (q * w == e)r++;
	printf("%d/%d=", q, w);
	scanf_s("%lf", &e);
	double t = (double)q / w;
	if (t == e)r++;	
	printf("满分4分，你的得分为%d\n", r);
}