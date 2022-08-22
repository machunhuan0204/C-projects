#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int arr[3][4] = { {1,2,3}, {4,5}};
	int i = 0;
	for (i=0; i<3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
		
	}
	return 0;
}
//int main()
//{
//	/*char arr[] = { "abcdef" };
//	int i = 0;
//	for(i=0; i<strlen(arr); i++)
//	{ 
//		printf("%c\n", arr[i]);
//	}*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i=0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//42
//	return 0;
//}
//1.strlen和sizeof没有什么关联
//2.strlen 是求字符串长度的--只能求字符串长度--库函数--使用头文件
//3.sizeof 计算变量、数组、类型的大小--单位是字节--操作符
//int main()
//{
//	//创建一个数组--存放整型--10个
//	//int arr[10] = {1,2,3};//不完全初始化，剩下的元素默认初始化为0
//	//char arr2[5] = {'a', 'b'};
//	//char arr3[5] = "ab";//ok
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//计算arr4所占空间的大小
//	printf("%d\n", strlen(arr4));//求字符串的长度
//	//int n = 5;
//	//char ch[n];//err
//	return 0;
//}
////描述第n个斐波那契数列的时候
////1  1  2  3  5  8  13  21  34  55  ....
//int count = 0;
//int Fib(int n)
//{
//	if (n==3)//测试第3个斐波那契数的计算
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
//	int c = 0;
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
//	int ret = 0;
//	scanf("%d", &n);
//	// TDD - 测试驱动开发
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	//printf("count = %d\n", count);
//	return 0;
//}
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	//计算字符串的长度
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
//		return	1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////把大事化小
////my_strlen("bit");
////1+my_strlen("it"); 
////1+1+my_strlren("t");
////1+1+1+my_strlen("");
////1+1+1+0
////3
//int main()
//{
//	char arr[] = "bit";
//	/*int len = strlen(arr);
//	printf("%d\n",len);*/
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是一整个数组，二十第一个元素的地址
//	printf("%d\n", len);
//	return 0;
//
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//int main()
//{
//	printf("hehe");
//	
//	main();
//	return 0;
//}
//#include "add.h"//引入自己写的用双引号
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////函数定义
//int Add(int x, int y)
//
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//int main()
//{
//	int len = 0;
//	len = strlen("abx");
//	printf("%d\n", len);
//
//	return 0;
//}
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)//传数组是地址
//{
//	//算法实现
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (right + left) / 2;//中间元素的下标
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
//
//	}
//	return -1;
//}
//int main()
//{
//	//二分查找  在一个有序数组中查找某个具体的数
//	//如果找到了返回下标，找不到返回-1
//	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//传递过去的是数组arr的地址
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字");
//	}
//	else
//	{
//		printf("找到了，下标是： %d", ret);
//	}
//	return 0;
//}
////int is_leap_year(int y)
////{
////	if (y % 4 == 0 && y % 100 != 0 || (y % 400 == 0))
////	
////		return 1;
////	else
////		return 0;
////	
////}
////int main()
////{
////	int year = 0;
////	for (year=1000; year<=2000; year++)
////	{
////		if (1 == is_leap_year(year))
////		{
////			printf("%d", year);
////		}
////	}
////	return 0;
////}
//是素数返回1，不是素数返回0
//int is_prime(int n)
//{
//	//2->n-1
//	int j = 0;
//	for(j=2; j<=sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i=100; i<=200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d", i);
//	}
//	return 0;
//}
////int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d", a);
//	return 0;
//}
//void Swap1(int x, int y)不能完成，当实参传给形参的时候 ，形参其时是实参的一分临时拷贝  
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa, int* pb)//这个是地址  是可以完成传送
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	//调用函数Swap函数传址
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	//Swap1(a, b);传值调用
//	
//	return 0;
//}
//定义函数
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
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//memset
// memory 记忆内存
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#####";
//	//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strlen - string length -字符串长度有关 
//	//strcpy - string copy  - 字符串拷贝
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}