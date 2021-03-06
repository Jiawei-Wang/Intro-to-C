#include "stdafx.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//Q1:struct的int数组操作
struct AAA 
{
	int a[10];
	int n;
};
struct AAA x1;

//Q2:struct的字符串操作
struct CCC
{
	char*a;int n;
};
struct CCC x2;

//Q3:两种访问struct内元素的方法
struct worker 
{
	char name[20];
	int age;
	int pay;
};
struct worker x3, *p3 = &x3;

//Q4:循环
struct farmer 
{
	char name[20];
	int age;
	int pay;
};
int function4(struct farmer farmer[], int n)
{
	int i, s = 0;
	for (i = 0;i < n;i++)
		s += farmer[i].pay;
	return s;
}

//Q5:从数组中按条件查找并打印
struct person
{
	char name[20];
	int age;
	char sex[5];
	int pay;
};
void find(struct person person[], int n, int x)
{
	int i;
	for (i = 0;i < n;i++)
	{
		if (person[i].age >= x)
		{
			printf("%s %s ", person[i].name, person[i].sex);
			printf("%d %d\n", person[i].age, person[i].pay);
		}
	}
}

//Q6:从数组的查找关键词并打印
struct student
{
	char name[20];
};
student s[];
void search(struct student s[], int n, const char*key)
{
	int i;
	for (i = 0;i < n;i++)
		if (strcmp(s[i].name, key) == 0)
			printf("%p\n",&s[i]);
};


int main()
{
	//Q1
	int i;
	int b[6] = { 20,35,46,18,24,52 };
	x1.n = 6;
	for (i = 0;i < x1.n;i++)
		x1.a[i] = b[i];
	x1.a[x1.n] = 37;
	x1.n++;
	for (i = 0;i < x1.n;i++)
		printf("%d ", x1.a[i]);
	printf("\n");

	//Q2
	x2.n = strlen("personalcomputer") + 1;
	x2.a = (char*)malloc(x2.n);
	strcpy_s(x2.a,20, "personalcomputer");
	printf("%d %s\n", x2.n - 1, x2.a);
	printf("%d %s\n", x2.n - 1 - 8, x2.a + 8);

	//Q3
	strcpy_s(x3.name, 20, "Gul’dan");
	x3.age = 40;
	x3.pay = 12000;
	x3.age += 10;
	x3.pay += 1000;
	printf("%d %d\n", p3->age, x3.pay);

	//Q4
	farmer farmer[2] = 
	{
	{"aaa",25,2000},
	{"bbb",40,4000}
	};
	printf("%d\n", function4(farmer, 2));

	//Q5
	person person[5]
	{
	{"aaa",20,"m",2000},
	{"bbb",30,"f",3000},
	{"ccc",40,"m",4000},
	{"ddd",50,"f",5000},
	{"eee",60,"m",6000}
	};
	find(person, 5, 35);

	//Q6
	student s[5] = { {"aaa"},{"bbb"},{"ccc"},{"ddd"},{"eee"} };
	search(s,5,"bbb");
}