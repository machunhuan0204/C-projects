#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = a + b;
	return 0;
}
//int main()
//{ 
//	char a = 3;
//	//00000000 00000000 00000000 00000011
//	//00000011  --a;
//	
//	char b = 127;
//	//00000000 00000000 00000000 01111111
//	//01111111
//	char c = a + b;
//	// a 和 b如何相加
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 01111111
//	//00000000 00000000 00000001 00000010
//	//100000010--c
//	//11111111 11111111 11111111 10000010  ---补码
//	//11111111 11111111 11111111 10000001  ---反码
//	//10000000 00000000 00000000 01111110  ---原码
//	printf("%d\n", c);
//	return 0;
//}
//学生
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 0;
//	//使用struct Stu这个类型创建了一个学生s1，并初始化
//	struct Stu s1 = {"王闯", 22, "2019235687"};
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	//printf("%s\n", (*ps).name);
//	/*printf("%s\n", s1.age);
//	printf("%s\n", s1.name);
//	printf("%s\n", s1.id);*/
//	//结构体变量‘.’成员名
//	return 0;
//}
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	if (a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//	max = (a > b ? a : b);
//	/*if (a > 5)
//	{
//		b = 3;
//	}
//	else
//	{
//		b = -3;
//	}
//	b = (a > 5 ? 3 : -3);*/
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//}
//int main()
//{
//	short s = 0;
//	int a = 0;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}
//int main() 
//{
//	int a = 0;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof 计算的变量所占内存空间的大小，单位是字节
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(p));//8
//	printf("%d\n", sizeof(arr));//40
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址操作符
//	*p = 20;//解引用操作符
//
//	return 0;
//}
//int main()
//{
//	/*int a = 10;
//	a = a + 2;
//	a += 2;
//	a = a >> 1;*/
//	int a = 0;
//	if (!a)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	//32bit
//	// // num&1 == 1
//	//统计num 的补码中有几个1
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	////加减法
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//异或
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d", a, b);
//	return 0;
//}
//int main()
//{
	
	////& -按2进制位与
	//int a = 3;
	//int b = 5;
	//int c = a & b;
	////00000000 00000000 00000000 00000011
	////00000000 00000000 00000000 00000101
	////00000000 00000000 00000000 00000001
	//printf("%d\n", c);
	//| -按二进制位或
	/*int a = 3;
	int b = 5;
	int c = a | b;
	printf("%d\n", c);*/
	////00000000 00000000 00000000 00000011
	////00000000 00000000 00000000 00000101
	////00000000 00000000 00000000 00000111
	

	//按二进制位异或
	//相同为0，相异为1
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	////00000000 00000000 00000000 00000011
//	////00000000 00000000 00000000 00000101
//	////00000000 00000000 00000000 00000110
//
//
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	//整数的二进制表示有：原码、反码、补码
//	//存储到内存的是补码
//	//10000000 00000000 00000000 00000001-原码
//	//11111111 11111111 11111111 11111110-反码
//	//11111111 11111111 11111111 11111111-补码
//	//
//	int b = a >> 1;
//	printf("%d\n", b);
//	//1111
//	//8421=15
//	return 0;
//}
//int main()
//{
//	int a = 16;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 5 / 2;//商2余1
//	printf("a = %d\n", a);
//	return 0;
//}