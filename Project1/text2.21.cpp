#include<stdio.h>
//int main()
//{
//	double a = 5 / 2.0;//��2��1��õ�С��Ҫ�������ͱ���������һ����С��
//	printf("a=%lf\n",a);
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	//�����Ķ����������֣�ԭ�뷴�벹��
//	//�洢���ڴ���ǲ���
//	//1000000000000000000000000000001-ԭ��
//	//1111111111111111111111111111111-����
//	//1111111111111111111111111111111-����
//	int b = a>>1;
//	printf("%d\n", b);
//	return 0;
//}
//���Ʋ�����
//1.�������� �ұ߶�������߲�ԭ����λ
//2.�߼����� �ұ߶�������߲�0
//���Ʋ����� �ұ߶�����߲�0
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
//	//a.b������
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	char c = a + b;
//	//10000010-c
//	//11111111111111111111111100000010-����
//	//11111111111111111111111100000001-����
//	//00000000000000000000000011111110-ԭ��
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
//	printf("%d\n", &arr[9] - &arr[0]);//ͬһ��ռ�
//	return 0;
//}
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//    printf("%p\n", arr);//��ַ-��Ԫ�صĵ�ַ
//    printf("%p\n", arr+1);
//    printf("%p\n", &arr[0]);
//    printf("%p\n", &arr[0]+1);
//    printf("%p\n", &arr);
//    printf("%p\n", &arr+1);//���40
//    //1.&arr-&������-������������Ԫ�صĵ�ַ-��������ʾ��������-&������ ȡ��������������ĵ�ַ
//    //2.sizeof��arr��-sizeof����������-��������ʾ����������-sizeof�������������������������Ĵ�С
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
//	//��������-�������
//	//�ַ�����-����ַ�
//	//ָ������-���ָ��
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
//	//Init(arr, sz);//�������ʼ��0
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
//int i = 0;//ȫ�ֱ���-����ʼ��-Ĭ����0
//int main()
//{
//	i--;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111//�޷�������ԭ������ͬ
//	if (i > sizeof(i))//sizeof����-�������/������ռ�ڴ�Ĵ�С>=0�޷���λ
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}