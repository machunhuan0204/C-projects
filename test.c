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
//	// a �� b������
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 01111111
//	//00000000 00000000 00000001 00000010
//	//100000010--c
//	//11111111 11111111 11111111 10000010  ---����
//	//11111111 11111111 11111111 10000001  ---����
//	//10000000 00000000 00000000 01111110  ---ԭ��
//	printf("%d\n", c);
//	return 0;
//}
//ѧ��
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
//	//ʹ��struct Stu������ʹ�����һ��ѧ��s1������ʼ��
//	struct Stu s1 = {"����", 22, "2019235687"};
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	//printf("%s\n", (*ps).name);
//	/*printf("%s\n", s1.age);
//	printf("%s\n", s1.name);
//	printf("%s\n", s1.id);*/
//	//�ṹ�������.����Ա��
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
//	//sizeof ����ı�����ռ�ڴ�ռ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(p));//8
//	printf("%d\n", sizeof(arr));//40
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��ַ������
//	*p = 20;//�����ò�����
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
//	//ͳ��num �Ĳ������м���1
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
//	////�Ӽ���
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d", a, b);
//	return 0;
//}
//int main()
//{
	
	////& -��2����λ��
	//int a = 3;
	//int b = 5;
	//int c = a & b;
	////00000000 00000000 00000000 00000011
	////00000000 00000000 00000000 00000101
	////00000000 00000000 00000000 00000001
	//printf("%d\n", c);
	//| -��������λ��
	/*int a = 3;
	int b = 5;
	int c = a | b;
	printf("%d\n", c);*/
	////00000000 00000000 00000000 00000011
	////00000000 00000000 00000000 00000101
	////00000000 00000000 00000000 00000111
	

	//��������λ���
	//��ͬΪ0������Ϊ1
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
//	//�����Ķ����Ʊ�ʾ�У�ԭ�롢���롢����
//	//�洢���ڴ���ǲ���
//	//10000000 00000000 00000000 00000001-ԭ��
//	//11111111 11111111 11111111 11111110-����
//	//11111111 11111111 11111111 11111111-����
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
//	int a = 5 / 2;//��2��1
//	printf("a = %d\n", a);
//	return 0;
//}