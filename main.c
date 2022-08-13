
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	for(i=1; i<=100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//算法实现  ，a中放最大值 b次之  c中放最小的
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//
//	}
//	if (b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//
//	}
//	printf("%d%d%d\n", a, b, c);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i=0; i<3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//
//		if (strcmp(password, "123456" )== 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to C!!!!";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right;
//	}
//	printf("welcome to C!!!!\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到啦，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	//int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n=1; n<=3; n++)
//	{
//		ret = ret * n;
//		sum = ret + sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n=1; n<=3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int  n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i=1; i<=n;i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
//int main() 
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//
//
//}
//int main()
//{
//	int x, y;
//	for (x=0,y=0; x<2 && y<5;++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i<10; i++)
//	{
//		for(; j<10; j++)
//		{
//		printf("hehe\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//10次打印
//	//10次循环
//	//10次
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i=0;i<10;i++)
//	{
//		if (i = 5)
//			printf("hehe\n");
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//初始化      判断   调整
//	for (i = 1; i <= 10; i++)
//	{ 
//		if (i == 5)
//			continue;//
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	//int ch = 0;
//	////EOF end  of  file  文件结束标志
//	///*while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}*/
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//    scanf("%s", password);
//	//缓冲区剩余一个\n
//	//读取下一个\n
//	while((ch=getchar()) !='\n');
//	printf("请确认（Y/N）：>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{ 
//		printf("放弃确认\n");
//	}
//		return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	/*int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);*/
//	return 0;
//
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	/*while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//		i++;
//	}*/
//	return 0;
//}
//int main() 
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++; n++; break;
//
//		}
//	case 4:
//		m++; break;
//	default:
//		break;
//
//
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n"); break;
//	case 2:
//		printf("星期二\n"); break;
//	case 3:
//		printf("星期san\n"); break;
//	case 4:
//		printf("星期si\n"); break;
//	case 5:
//		printf("星期wu\n"); break;
//	case 6:
//		printf("星期lui\n"); break;
//	case 7:
//		printf("星期天\n"); break;
//	}
//
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//			i += 2;
//	}
//	/*while (i < 100)
//	{ 
//		if (i % 2 == 1)
//			printf("%d", i);
//	i++;
//	}*/
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	if (a % 2 == 1)
//		printf("奇数");
//	else
//		printf("不是奇数");
//	return 0;
//}
//int main()
//{
//	int num = 4;
//	if (4 == num)
//	{
//		printf("hehe\n");
//	}
//	/*if (num = 5)//  =  为赋值  ==判断相等
//	{
//		printf("hehe\n");
//	}*/
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{ 
//		if (b == 2)
//			printf("hehe\n");
//	
//		else//距离最近的匹配
//			printf("haha\n");
//	}
//		return 0;
//}
//int main()
//{
//	int age = 75;
//	if (age < 18)
//		printf("未成年");
//	else if (age >= 18 && age < 28)
//		printf("青年");
//	else if (age >= 28 && age < 55)
//		printf("中年");
//	else if (age >= 55 && age < 90)
//		printf("老年");
//	else if (age >= 90)
//		printf("耋耄之年");
//
//	/*if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");*/
//	/*if (age < 18)
//		printf("未成年\n");*/
//	return 0;
//}
