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
//	int max = arr[0];//最大值
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
//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	//确定打印9行
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
//猜数字游戏
//1.电脑会产生一个随机数
//2.猜数字
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
	//1.生成随机数
	int ret = 0;
	int guess = 0;
	//拿时间戳来设置随机数的生成起始点
	//time_t time(time *timer)
	//srand((unsigned int)time(NULL));//时间一直都在变化，时间戳
	//当前计算机时间-计算机的起始时间（1970.1.1.0：0：0）==（xxxx）秒
	ret=rand()%100+1;//生成1-100之间的随机数
	//2.猜数字
	//printf("%d\n",ret);
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d",&guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//不要频繁调用
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}*/
//int main()
//{
//	//shutdown -s -t60
//	//system()-执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意你的电脑在一分钟内关机从，如果输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s",input );
//	if (strcmp(input, "我是猪")==0)//比较两个字符串-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}