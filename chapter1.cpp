﻿#include "stdafx.h"

//Q1:加法和乘法
int num_sum, num_product;
void function1(int x, int y)
{
	num_sum = x + y;
	num_product = x * y;
}

//Q2:立方
int function2(int x)
{
	return x * x*x;
}

//Q3:平均值
double function3(double x, double y, double z)
{
	return(x + y + z) / 3;
}

//Q4:求和与求乘积
int all_sum, all_product;
void function4(int x, int y, int z)
{
	all_sum = x + y + z;
	all_product = x * y*z;
}

int main()
{
	//Q1
	int x1 = 5, y1 = 6;
	function1(x1, y1);
	printf("%d,%d\n",num_sum,num_product);

	//Q2
	int x2 = 3;
	printf("%d\n", function2(x2));

	//Q3
	double a3 = 2.0, b3 = 3.0, c3 = 4.0, d;
	d = function3(a3, b3, c3);
	printf("%lf\n", d);

	//Q4
	int a4 = 10, b4 = 20, c4 = 30;
	function4(a4, b4, c4);
	printf("%d,%d\n", all_sum, all_product);
}
