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
		//����
		for (j = 0; j < sz-1-i; j++)
		{
			//һ��ð������
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
	//�Ƚ���������ֵ
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
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ�������ֱ����>  <  =  ���Ƚ�  ��Ӧ����strcmp����
	//
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
	
}
void test3()
{
	struct Stu s[3] = { {"������", 20},{"lisi", 30},{"wangw", 15} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), com_stu_by_age);
}
int main()
{
	//ð������g
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
//	//void* ���͵�ָ��  ���Խ����������͵ĵ�ַ
//	void* p = &a;
//	//void*���͵�ָ��  ���ܽ��н����ò���
//	//void*���͵�ָ��  ���ܽ���+-��������
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//ָ������
//	//int* arr[10];
//	//����ָ��
//	//int* (* pa[10]) = &arr;
//	//ָ������ָ���ָ��
//	//����ָ��
//	int (* pAdd)(int, int) = Add;
//	//int sum = (*pAdd)(1, 2);
//	//int sum = (pAdd)(1, 2);
//	//printf("sum = %d\n", sum);
//	//����ָ�������
//	/*int (*pArr[4])(int, int) = Add;*/
//	//ָ����ָ�������ָ��
//	int (*(*ppArr)[4])(int, int) = Add;
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//	int (*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//pfArr��һ������ - ����ָ�������
//	//ppfArr��һ��ָ��  ����ָ������  ��ָ��
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	// ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int, int)
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
//		printf("��ѡ��>");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("������������������>");
//			scanf_s("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//
//
//}
//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("������������������>");
//	scanf_s("%d %d", &x, &y);
//	printf("%d\n", Add(x, y));
//}
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		printf("��ѡ��>");
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
//			printf("�����˳����򣡣���\n" );
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	
//}
//char* my_strcpy(char* dest, const char* src)
////1.дһ������ָ��pf  �ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
//
////2.дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
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
////signal  ��һ����������
////signal  �����Ĳ�����2������һ��int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
////signal  �����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ĺ����Ĳ�����int������������void
////
//void(*signal(int, void(*)(int)))(int);
//
////��
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//int arr[5];
//int *parr1[10];
//int(*parr2)[10];
//int(*parr3[10])[5];
//�������������ʽ
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
////������ָ�����ʽ
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
//	//int *p = NULL;//p������ָ�� - ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//	//char* pc = NULL;// pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	//����ָ��  - ָ�������ָ�� - �������ĵ�ַ
//	//int arr[10] = {0};
//	// &arr - ��Ԫ�صĵ�ַ
//	// &arr[10] - ��Ԫ�صĵ�ַ
//	// &arr - ����ĵ�ַ
//	//
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ĵ�ַҪ������
//	return 0;
//	//�����P��������ָ��
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";//�����ַ���--�����޸� ����ȥ��
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
//	char* p = "abcdef";//��abcdef����һ�������ַ���
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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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
//	//00000000 00000000 00000000 00010100-ԭ��
//	//00000000 00000000 00000000 00010100-����
//	//00000000 00000000 00000000 00010100-����
//
//	int b = -10;
	//10000000 00000000 00000000 00001010 -ԭ��
//	//11111111 11111111 11111111 11110101 -����
//	//11111111 11111111 11111111 11110110
//	//
//	int b = -10;
//	int b = -10;
//	int b = -10;
//	return 0;
//}