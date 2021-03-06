#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Pupil { char name[10];int grade; };
struct Pupil x, y;
void Append(FILE* fio, const struct Pupil rec);
struct Pupil Find(FILE* fio, struct Pupil rec);
int Update(FILE* fio, const struct Pupil rec);
void Print(FILE* fio);

int main() 
{
	int i;
	FILE* fio = fopen("student.txt", "rb+");
	if (!fio)
	{
		printf("文件未被打开，退出运行\n");
		exit(1);
	}
	while(1)
	{
		printf("功能选择：\n");
		printf("1.向文件追加一条记录\n");
		printf("2.按姓名进行查找\n");
		printf("3.按姓名更新记录\n");
		printf("4.打印当前文件内全部记录\n");
		printf("5.退出运行\n");
		do { printf("请输入您的选择：\n");scanf_s("%d", &i); } while (i < 1 || i>5);
		switch (i)
		{
		case 1:
			printf("输入待追加的学生记录:");
			scanf("%s %d", x.name, &x.grade);
			Append(fio, x);
			break;
		case 2:
			printf("输入待查找的学生记录:");
			scanf("%s", x.name);
			y = Find(fio,x);
			if (strcmp(y.name, "AAA") == 0)
				printf("未查询到该记录\n");
			else printf("查找成功: %s %d\n", y.name, y.grade);
			break;
		case 3:
			printf("输入待更新的学生记录:");
			scanf("%s %d", x.name, &x.grade);
			i = Update(fio, x);
			if (i == 0)
				printf("更新失败\n");
			else printf("更新成功,原记录为:%s %d\n", x.name, x.grade);
			break;
		case 4:
			printf("输出文件中的全部记录:\n");
			Print(fio);
			break;
		case 5:
			printf("结束运行\n");
			fclose(fio);
			break;
		}
	}
}

void Append(FILE* fio, const struct Pupil rec)
{
	fseek(fio,0,SEEK_END );
	fwrite(&rec, sizeof(rec), 1, fio);
}

struct Pupil Find(FILE* fio, struct Pupil rec)
{
	fseek(fio, 0, SEEK_END);
	while (!feof(fio))
	{
		fread(&x, sizeof(x), 1, fio);
		if (feof(fio))
			break;
		if (strcmp(x.name, rec.name) == 0)
			return x;
	}
	strcpy_s(x.name, "AAA");
	return x;
}

int Update(FILE*fio, const struct Pupil rec)
{
	fseek(fio, 0, SEEK_END);
	while (!feof(fio))
	{
		fread(&x, sizeof(x), 1, fio);
		if (feof(fio))
			break;
		if (strcmp(x.name, rec.name) == 0)
		{
			int k = sizeof(x);
			fseek(fio, -k, SEEK_CUR);
			fwrite(&rec, sizeof(rec), 1, fio);
			return 1;
		}
	}
	return 0;
}

void Print(FILE*fio)
{
	fseek(fio, 0, SEEK_SET);
	while (!feof(fio))
	{
		fread(&x, sizeof(x), 1, fio);
		if (feof(fio))
			break;
		printf("%s %d\n", x.name, x.grade);
	}
}