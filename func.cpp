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
//1.strlen��sizeofû��ʲô����
//2.strlen �����ַ������ȵ�--ֻ�����ַ�������--�⺯��--ʹ��ͷ�ļ�
//3.sizeof ������������顢���͵Ĵ�С--��λ���ֽ�--������
//int main()
//{
//	//����һ������--�������--10��
//	//int arr[10] = {1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//char arr2[5] = {'a', 'b'};
//	//char arr3[5] = "ab";//ok
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//����arr4��ռ�ռ�Ĵ�С
//	printf("%d\n", strlen(arr4));//���ַ����ĳ���
//	//int n = 5;
//	//char ch[n];//err
//	return 0;
//}
////������n��쳲��������е�ʱ��
////1  1  2  3  5  8  13  21  34  55  ....
//int count = 0;
//int Fib(int n)
//{
//	if (n==3)//���Ե�3��쳲��������ļ���
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
//	// TDD - ������������
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
//	//�����ַ����ĳ���
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
////�Ѵ��»�С
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
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ���һ�������飬��ʮ��һ��Ԫ�صĵ�ַ
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
//#include "add.h"//�����Լ�д����˫����
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////��������
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
//int binary_search(int arr[], int k, int sz)//�������ǵ�ַ
//{
//	//�㷨ʵ��
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (right + left) / 2;//�м�Ԫ�ص��±�
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
//	//���ֲ���  ��һ�����������в���ĳ���������
//	//����ҵ��˷����±꣬�Ҳ�������-1
//	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//���ݹ�ȥ��������arr�ĵ�ַ
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ� %d", ret);
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
//����������1��������������0
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
//	//��ӡ100-200֮�������
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
//void Swap1(int x, int y)������ɣ���ʵ�δ����βε�ʱ�� ���β���ʱ��ʵ�ε�һ����ʱ����  
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa, int* pb)//����ǵ�ַ  �ǿ�����ɴ���
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
//	//���ú���Swap������ַ
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	//Swap1(a, b);��ֵ����
//	
//	return 0;
//}
//���庯��
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
// memory �����ڴ�
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
//	//strlen - string length -�ַ��������й� 
//	//strcpy - string copy  - �ַ�������
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