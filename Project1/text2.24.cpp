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
//	Stu s = {"����",20,"15598866688","��"};
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
//ջ�����ֲ����� ��������ʽ������������Ҳ���ٿռ� �Ƚ���� ����ȳ�
//��������̬���� malloc/free realloc calloc
//��̬����ȫ�ֱ��� ��̬����
//����ջ֡�Ĵ���������
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	return 0;
//}
//���С��
/*int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}*///��ǰ����С�˴�ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ�У������ݵĸ�λ���������ڴ�ĵ͵�ַ�У�
//С�ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĵ͵�ַ�У������ݵĸ�λ, ���������ڴ�ĸߵ�ַ�С�
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		//����1С��
		//����0���
		return *p;
}
int main()
{
	//дһ�δ���������ǵ�ǰ�ֽ�����ʲô
	//����1��С��
	//����0�����
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}