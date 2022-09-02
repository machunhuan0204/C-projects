#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <stdlib.h>
#include <string.h>


void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i< sz; i++)
	{
		int j = 0;
		//趟数
		for (j = 0; j < sz-1-i; j++)
		{
			//一趟冒泡排序
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_int(const void* e1, const void* e2)
{
	//比较两个整型值
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
}

int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else if (*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
void test2()
{
	float f[] = { 9.0, 8.0, 4.0 ,3.0,1.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f\n", f[j]);
	}
}
int com_stu_by_age(const void* e1,const void* e2)
{
return 	((struct Stu*)e1)->age - ((struct Stu*)e2)->age;;
	
	

}
int com_stu_by_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	//字符串不能直接用>  <  =  来比较  ，应该用strcmp函数
	//
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
	
}
void test3()
{
	struct Stu s[3] = { {"扎根三", 20},{"lisi", 30},{"wangw", 15} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), com_stu_by_age);
}
int main()
{
	//冒泡排序：g
	//test1();
	//
	//
	//test2();
	test3();
	return 0;
}




//
//int main()
//{
//	int a = 10;
//	/*int* pa = &a;
//	char* pc = &a;*/
//	//void* 类型的指针  可以接收任意类型的地址
//	void* p = &a;
//	//void*类型的指针  不能进行解引用操作
//	//void*类型的指针  不能进行+-整数操作
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//指针数组
//	//int* arr[10];
//	//数组指针
//	//int* (* pa[10]) = &arr;
//	//指向数组指针的指针
//	//函数指针
//	int (* pAdd)(int, int) = Add;
//	//int sum = (*pAdd)(1, 2);
//	//int sum = (pAdd)(1, 2);
//	//printf("sum = %d\n", sum);
//	//函数指针的数组
//	/*int (*pArr[4])(int, int) = Add;*/
//	//指向函数指针数组的指针
//	int (*(*ppArr)[4])(int, int) = Add;
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int(*p)[10] = &arr;//取出数组的地址
//	int (*pf)(int, int);//函数指针
//	int (*pfArr[4])(int, int);//pfArr是一个数组 - 函数指针的数组
//	//ppfArr是一个指向  函数指针数组  的指针
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr 是一个数组指针，指针指向的数组有4个元素
//	// 指向的数组的每个元素的类型是一个函数指针 int(*)(int, int)
//	//
//	return 0;
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("** 1.add  2.sub  ****\n");
//	printf("** 3.mul  4.div  ****\n");
//	printf("** 5.xor  0.exit ****\n");
//	printf("*********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[])(int, int) = {0, Add, Sub, Mul, Div, Xor };
//	do {
//		menu();
//		printf("请选择：>");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数：>");
//			scanf_s("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//
//
//}
//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：>");
//	scanf_s("%d %d", &x, &y);
//	printf("%d\n", Add(x, y));
//}
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		printf("请选择：>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1: 
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("您已退出程序！！！\n" );
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	
//}
//char* my_strcpy(char* dest, const char* src)
////1.写一个函数指针pf  能够指向my_strcpy
//char* (*pf)(char*, const char*);
//
////2.写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char* (*pArr[4])(char*, const char*) ;
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];
//	int (*pa)(int, int) = Add;
//	int (*parr[4])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (i = 0; i < 4 ; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
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
//	int a = 0;
//	int b = 0;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", Add(2, 3));
//	return 0;
//}
////signal  是一个函数声明
////signal  函数的参数有2个，第一个int。第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
////signal  函数的返回类型也是一个函数指针：该函数指针的函数的参数是int，返回类型是void
////
//void(*signal(int, void(*)(int)))(int);
//
////简化
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//int arr[5];
//int *parr1[10];
//int(*parr2)[10];
//int(*parr3[10])[5];
//参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////参数是指针的形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i<x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
// }
//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}
//int main()
//{
//	//int *p = NULL;//p是整型指针 - 指向整型的指针 - 可以存放整型的地址
//	//char* pc = NULL;// pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	//数组指针  - 指向数组的指针 - 存放数组的地址
//	//int arr[10] = {0};
//	// &arr - 首元素的地址
//	// &arr[10] - 首元素的地址
//	// &arr - 数组的地址
//	//
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组的地址要存起来
//	return 0;
//	//上面的P就是数组指针
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";//常量字符串--不能修改 能拿去用
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//“abcdef”是一个常量字符串
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdf";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	char* p = (char*) & a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;//4
//	float f = 10.0;//4
//
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	//00000000 00000000 00000000 00010100-原码
//	//00000000 00000000 00000000 00010100-反码
//	//00000000 00000000 00000000 00010100-补码
//
//	int b = -10;
	//10000000 00000000 00000000 00001010 -原码
//	//11111111 11111111 11111111 11110101 -反码
//	//11111111 11111111 11111111 11110110
//	//
//	int b = -10;
//	int b = -10;
//	int b = -10;
//	return 0;
//}