#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#########";
//	//               bit\0-\0代表字符串停止
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy -string copy-字符串拷贝
//	//strlen -string length-字符串长度有关
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//传值调用
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("max=%d", max);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//解引用操作
//	printf("%d\n",a);
//	return 0;
//}
// 传址调用
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}
#include<math.h>
//int is_prime(int n)//是素数返回1，不是返回0
//{
//	int j;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if((y%4==0&&y%100!=0)||(y%400==0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int binary_search(int arr[], int k,int sz)//本质上arr是一个指针
//	//算法的实现
//{   
//	int left = 0;
//	
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//中间元素下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回，这个数的下标，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//void add(int* p)
//{
//	(* p)++;
//}
//int main()
//{
//	int num = 0;
//	int i = 0;
//	for(i=0;i<3;i++)
//	{ 
//		add(&num);
//		printf("num=%d\n", num);
//	}
//	
//	return 0;
//}
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));//43  
//   //printf("%d", printf("%d",2));
//   // printf("%d",1);
//    //结果是啥？
//    //注：printf函数的返回值是打印在屏幕上字符的个数
//    return 0;
//}
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归
//	print(num);
//	//printf(1234)
//	//printf(123) 4
//	//printf(12) 3 4
//	//printf(1) 2 3 4
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
////把大事化小
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strelen("t");
////1+1+1+my_srelen("");
////1+1+1+0
//int main()
//{
//	char arr[] = "bit";
//	//int len=strlen(arr);//求字符串长度
//	//printf("%d\n",len);
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len=%d\n", len );
//	return 0;
//}
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n-1);
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac2(n);//循环方式
//	printf("%d\n", ret);
//}
//斐波拉契数列
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//TDD-测试驱动开发
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}

//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}
//汉诺塔 青蛙跳台阶