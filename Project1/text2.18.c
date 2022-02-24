#include<stdio.h>
#include<string.h>
//int main()
//{
//	int arr1[10]={1,2,3};//不完全初始化，剩下的元素默认初始化为0//创建一个数组-存放整型10个
//	char arr2[]={'a','b','c'};
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof计算arr4所占空间的大小
//	//7个元素-char7*1=7
//	printf("%d\n", strlen(arr4));
//	printf("%d\n", strlen(arr2));//随机值
//	printf("%d\n", sizeof(arr2));
//	//1.strlen和sizeof没有什么关联
//	// 2.strlen是求字符串长度-只能针对字符串求长度-库函数-使用得引头文件
//	// 3.sizeof计算变量、数组、类型得大小-单位是字节-操作符
//	//strlen求字符串的长度
//	// [ a b c d e f \0]'\0'之前的字符个数
//	// 6
//	//int n = 5;
//	//char ch[n];要常量
//	return 0;
//
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    for (i = 0; i < sz; ++i)
//    {
//        printf("&arr[%d] = %p\n", i, &arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	char ch[5][6];
//	return 0;
//}