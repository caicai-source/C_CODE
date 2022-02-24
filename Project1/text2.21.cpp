#include<stdio.h>
//int main()
//{
//	double a = 5 / 2.0;//商2余1想得到小数要操作数和被除数中有一个是小数
//	printf("a=%lf\n",a);
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	//整数的二进制有三种：原码反码补码
//	//存储到内存的是补码
//	//1000000000000000000000000000001-原码
//	//1111111111111111111111111111111-反码
//	//1111111111111111111111111111111-补码
//	int b = a>>1;
//	printf("%d\n", b);
//	return 0;
//}
//右移操作符
//1.算术右移 右边丢弃，左边补原符号位
//2.逻辑右移 右边丢弃，左边补0
//左移操作符 右边丢弃左边补0
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    i = a++ && ++b && d++;
//    //i = a++||++b||d++;
//    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//    return 0;
//}
//int main()
//{
//	char a = 3;//8bit
//	//00000000000000000000000000000011
//	//00000011-a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111-b
//	//a.b如何相加
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	char c = a + b;
//	//10000010-c
//	//11111111111111111111111100000010-补码
//	//11111111111111111111111100000001-反码
//	//00000000000000000000000011111110-原码
//	//-126
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//同一块空间
//	return 0;
//}
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//    printf("%p\n", arr);//地址-首元素的地址
//    printf("%p\n", arr+1);
//    printf("%p\n", &arr[0]);
//    printf("%p\n", &arr[0]+1);
//    printf("%p\n", &arr);
//    printf("%p\n", &arr+1);//差距40
//    //1.&arr-&数组名-数组名不是首元素的地址-数组名表示整个数组-&数组名 取出的是整个数组的地址
//    //2.sizeof（arr）-sizeof（数组名）-数组名表示的整个数组-sizeof（数组名）计算的是整个数组的大小
//    //
//    return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa=&a;
//	//int* pb = &b;
//	//int* pc = &c;
//	//整形数组-存放整形
//	//字符数组-存放字符
//	//指针数组-存放指针
//	//int arr[10]
//	int* arr2[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//把数组初始化0
//	Print(arr, sz);
//	Reverse(arr,sz);
//	Print(arr, sz);
//	return 0;
//}
//int main()
//{
//	printf("%d ",sizeof(char* ));
//	return 0;
//}
//int i = 0;//全局变量-不初始化-默认是0
//int main()
//{
//	i--;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111//无符号正数原反补相同
//	if (i > sizeof(i))//sizeof（）-计算变量/类型所占内存的大小>=0无符号位
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}