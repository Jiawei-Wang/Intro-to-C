#include "stdafx.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main()
{
	//Q1:斐波那契数列和逆向排序
	int a[30], i, j, temp;
	a[0] = 0, a[1] = 1;
	printf("%d ", a[0]);
	printf("%d ", a[1]);
	for (i = 2;i <= 19;i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		printf("%d ", a[i]);
	}
	printf("\n");
	for (j = 0;j <= 9;j++) 
	{
		temp = a[j];
		a[j] = a[19 - j];
		a[19 - j] = temp;
		printf("%d ", a[j]);
	}
	for (j = 10;j <= 19;j++) 
	{
		printf("%d ", a[j]);
	}
	printf("\n");

	//Q2:统计字符串中十进制数字字符个数
	char b[50];
	int i2, c[10] = { 0 };
	printf("输入一串字符串：");
	scanf_s("%s",&b,50);
	for (i2 = 0;b[i2];i2++)
	{
		if (b[i2] >= '0'&&b[i2] <= '9')
			c[b[i2] - 48]++;
	}
	for (i2 = 0;i2 <= 9;i2++) 
	{
		printf("数字%d有：%d个\n", i2, c[i2]);
	}
	printf("\n");

	//Q3:矩阵的乘积
	int table1[3][4] = { {3,0,4,5,}, {6,2,1,7}, {4,1,5,8} }, table2[4][4] = { {1,4,0,3}, {2,5,1,6}, {0,7,4,4}, {9,3,6,0} };
	int table3[3][4] = { {0} };
	int x, y, z;
	for (x = 0;x < 3;x++) 
	{
		for(y=0;y<4;y++)
		{
			for (z = 0;z < 4;z++)
			{
				table3[x][y] += table1[x][z] * table2[z][y];
			}
			printf("%d ", table3[x][y]);
		}
	}
	printf("\n");

	//Q4:学生成绩的输入与计算
	#define N 2 
	#define M 3
	double student[N][M+2];
	int p, q;
	printf("依次输入%d个同学的%d门课程的成绩：", N, M);
	for (p = 0;p < N;p++)
	{
		for (q=0;q<M;q++)
		{
			scanf_s("%lf", &student[p][q]);
		}
	}
	for(p = 0;p < N;p++)
	{
		for (q = 0;q<M;q++)
		{
			student[p][M] += student[p][q];
		}
		student[p][M + 1] = student[p][M] / M;
		printf("第%d位同学的平均成绩为：%6.2lf\n", p + 1, student[p][M + 1]);
	}
	//Q4输出结果错误，暂时未想明白原因，日后修改
}