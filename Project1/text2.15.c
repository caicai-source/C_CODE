#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//���ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d",max);
//	return 0;
//}
//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	//ȷ����ӡ9��
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��������Ϸ
//1.���Ի����һ�������
//2.������
#include<stdlib.h>
#include<time.h>
/*void menu()
{
	printf("*********************************\n");
	printf("*********** 1.play     **********\n");
	printf("*********** 0.exit     **********\n");
	printf("*********************************\n");
}
//RAND_MAX-32767
void game()
{
	//1.���������
	int ret = 0;
	int guess = 0;
	//��ʱ����������������������ʼ��
	//time_t time(time *timer)
	//srand((unsigned int)time(NULL));//ʱ��һֱ���ڱ仯��ʱ���
	//��ǰ�����ʱ��-���������ʼʱ�䣨1970.1.1.0��0��0��==��xxxx����
	ret=rand()%100+1;//����1-100֮��������
	//2.������
	//printf("%d\n",ret);
	while (1)
	{
		printf("�������:>");
		scanf("%d",&guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��ҪƵ������
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}*/
//int main()
//{
//	//shutdown -s -t60
//	//system()-ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע����ĵ�����һ�����ڹػ��ӣ�������룺��������ȡ���ػ�\n������>:");
//	scanf("%s",input );
//	if (strcmp(input, "������")==0)//�Ƚ������ַ���-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}