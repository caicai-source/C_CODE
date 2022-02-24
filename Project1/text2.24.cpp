#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "helleo bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s", t.pc);
//	return 0;
//}
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void Print1(Stu s)
//{
//	printf("name:%s\n", s.name);
//	printf( "age:%d\n", s.age );
//	printf("tele:%s\n",s.tele);
//	printf("sex:%s\n", s.sex);
//}
//void Print2(Stu* s)
//{
//	printf("name:%s\n", s->name);
//	printf("age:%d\n", s->age);
//	printf("tele:%s\n", s->tele);
//	printf("sex:%s\n", s->sex);
//}
//int main()
//{
//	Stu s = {"李四",20,"15598866688","男"};
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
//栈区：局部变量 函数的形式参数函数调用也开辟空间 先进后出 后进先出
//堆区：动态分配 malloc/free realloc calloc
//静态区：全局变量 静态变量
//函数栈帧的创建和销毁
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	return 0;
//}
//大端小端
/*int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}*///当前机器小端大端（存储）模式，是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中；
//小端（存储）模式，是指数据的低位保存在内存的低地址中，而数据的高位, ，保存在内存的高地址中。
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		//返回1小端
		//返回0大端
		return *p;
}
int main()
{
	//写一段代码告诉我们当前字节序是什么
	//返回1，小端
	//返回0，大端
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}