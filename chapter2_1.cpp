#include "stdafx.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

//Q1:三角形面积计算
double a1,b1,c1,s1, area;
double function1(double a1,double b1,double c1)
{
	s1 = (a1 + b1 + c1) / 2.0;
	area = sqrt(s1*(s1 - a1)*(s1 - b1)*(s1 - c1));
	return area;
}

//Q2;招生人数计算
int stu_num,year,total_num;
double increase_rate;
double function2(int stu_num, double increase_rate,int year )
{
	total_num = (floor)((1 + increase_rate)*year*stu_num);
	return total_num;
}

//Q3:算数平均值与几何平均值
int a3, b3, c3, d3;
double average1, average2;
void function3(int a3,int b3,int c3,int d3)
{
	average1 = (a3 + b3 + c3 + d3) / 4.0;
	average2 = pow(a3*b3*c3*d3, 0.25);
}

//Q4:由方程式计算X,Y的值
double a4, b4, x4, y4, temp;
void function4(double a4,double b4)
{
	temp = 2 / (3 * (a4 + b4));
	x4 = temp * a4*sin(a4);
	y4 = temp * b4*cos(b4);
}

int main()
{
	//Q1
	printf("请输入三边各自的长度：");
	scanf_s("%lf%lf%lf", &a1, &b1, &c1);
	if (a1 <= 0 || b1 <= 0 || c1 <= 0)
	{
		printf("边长不可为非正数\n");
		exit(1);
	}
	if (a1 + b1 <= c1 || a1 + c1 <= b1 || b1 + c1 <= a1)
	{
		printf("任意两边长度之和不可大于第三边\n");
		exit(1);
	}
	function1(a1,b1,c1);
	printf("%6.2lf\n", area);

	//Q2
	printf("请输入当前学生人数，年增长率（小数）和年数：");
	scanf_s("%d%lf%d", &stu_num, &increase_rate, &year);
	function2(stu_num, increase_rate,year);
	printf("%d\n", total_num);

	//Q3
	printf("请输入4个正整数：");
	scanf_s("%d%d%d%d", &a3, &b3, &c3, &d3);
	function3(a3,b3,c3,d3);
	printf("算数平均值为：%6.2lf\n几何平均值为：%6.2lf\n", average1, average2);

	//Q4
	printf("请输入a,b的值：");
	scanf_s("%lf%lf", &a4, &b4);
	if (a4 + b4 == 0)
	{
		printf("a+b不可为0");
		exit(1);
	}
	function4(a4, b4);
	printf("x=%6.2lf\ny=%6.2lf", x4, y4);
}