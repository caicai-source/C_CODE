#include<stdio.h>
#include<string.h>
//int main()
//{
//	int arr1[10]={1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0//����һ������-�������10��
//	char arr2[]={'a','b','c'};
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof����arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ��-char7*1=7
//	printf("%d\n", strlen(arr4));
//	printf("%d\n", strlen(arr2));//���ֵ
//	printf("%d\n", sizeof(arr2));
//	//1.strlen��sizeofû��ʲô����
//	// 2.strlen�����ַ�������-ֻ������ַ����󳤶�-�⺯��-ʹ�õ���ͷ�ļ�
//	// 3.sizeof������������顢���͵ô�С-��λ���ֽ�-������
//	//strlen���ַ����ĳ���
//	// [ a b c d e f \0]'\0'֮ǰ���ַ�����
//	// 6
//	//int n = 5;
//	//char ch[n];Ҫ����
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