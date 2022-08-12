#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>

//结构体
// char int 
// 人3.14、
// 书-复杂对象
// 名字 身高  年龄  省份证号
// 复杂对象--结构体--自己创造的类型
 
struct Book
{
	char name[20];//C语言程序设计
	short price;//55

};
int main()
{
	//利用结构体类型创建一个类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	strcpy(b1.name, "C++") ;//strcpy---string  copy--字符串拷贝-库函数string.h
	printf("%s\n", b1.name);
							//struct Book* pd = &b1;
	//利用PD打印出我的书名和价格
	//结构体变量、成员
	//->结构体指针->成员
	/*printf("%s\n", pd->name);
	printf("%d\n", pd->price);*/
	/*printf("%s\n", (,*pd).name);
	printf("%d\n", (*pd).price);*/
	/*printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d元\n", b1.price);*/


	return 0;

}
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;//32-4    64-8
//	printf("%d\n", sizeof(pd));
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//int a = 10;//申请4个字节的空间
//	//int* p = &a;//P是一个变量指针变量
//	//printf("%p\n", p);
//	return 0;
//	//*P解引用操作符，间接访问操作符
//}
//int main()
//{
//	char ch = 'w';
//	char *pc = 
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int *p = &a;//取地址a
//	printf("%p\n", &a);
//	return 0;
//}
//int main()
//{
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;//a是静态的局部变量
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b)
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 5;
//	int c = a && b;
//	printf("c = %d\n", c);
//		return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a++;//前置佳佳是先＋再赋值，后置佳佳是先赋值再加加
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
//Max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是：%d", num1);
//	else
//		printf("较大值是：%d", num2);
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
	//printf(" %d\n", arr[5]);
	//char ch[20];
	//float arr2[5];
	/*return 0;*/
//
//Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 2;
//	int mun2 = 45;
//	int sum = 0;
//	sum = Add(num1, mun2);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("加入华\n");
//
//	while (line<20000)
//	{
//	printf("敲一行代码: %d\n", line);
//	line++;
//	}
//	if(line>=2000)
//		printf("好工作");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("加入腾讯\n");
//	printf("你要好好学习吗？");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好工作");
//	else
//		printf("烤地瓜");
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\89\ui.c"));
//	return 0;
//}
//int main()
//{
//	printf("C:\\test\\mch\\dong.c");
//	return 0;
//}
//i/*nt main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;*/
//
//}
