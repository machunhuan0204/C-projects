#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system() -执行系统命令
	system("shutdown -s -t 60");
	while (1)
	{
		printf("请注意，你的电脑在1分钟之内关机，如果输入：我是猪，就取消关机\n请输入>:");
		scanf("%s", input);
	
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
		}

	}

	return 0;
}
////猜数字游戏
////1.电脑随机生成一个数字
////2.猜数字
//void menu()
//{
//	printf("***********************\n");
//	printf("****1.  play 0.exit ***\n");
//	printf("***********************\n");
//}
//void game()
//{
//	//1.生成随机数  rand()
//	int ret = 0;
//	int guess = 0;//接收猜的数字
//	//拿时间戳来设置随机数的生成起始点
//	//时间戳  当前计算机时间-计算机的起始时间
//		ret = rand()%100+1;//生成随机数
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对啦！！！");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//		default:
//			printf("选择错误\n");
//		}
//	}
//	while(input);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	
//	//确定打印9 行
//	for (i=1; i<=9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i*j);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//最大值
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i=1; i<=sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double  sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i=1; i<=100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		 if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a=1,b=1; a<= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	 for(a=100;a<=200;a++)
//	{
//		 //
//		//判断a是否为素数
//		 //判断规则   1.试除法
//		 //产生2->a-1
//		 int j = 0;
//		 for (j=2; j<sqrt(a); j++)
//		 {
//			 if (a % j == 0)
//			 {
//				 break;
//			 }
//		 }
//		 if (j>sqrt(a))
//		 {
//			 count++;
//			 printf("%d\n", a);
//				
//		 }
//	}
//	 printf("count =  %d\n", count);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year=1000; year<=200; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d", year);
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		
//		//能被4整除并且不能被100整除   或者能被400整除
//		if (year%4==0 &&year%100!=0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if(year%400==0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//
//	}
//	printf("%d", n);
//	return 0;
//}