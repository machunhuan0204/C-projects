#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include <math.h>

int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer = %c\n", killer);
		}
	}
	return 0;
}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i=0; i<10; i++)
//	{
//		for (j=0; j < 10;j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];;
//			}
//		}
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[], int sz)//����߿�ʼ��һ��ż��  ���ұ߿�ʼ��һ������  �����ǽ���
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//����߿�ʼ��һ��ż��
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//���ұ߿�ʼ��һ������  
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		//�����ǽ���
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ�ȵ�
//	total = money;
//	empty = money;
//	//����������ˮ
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total = %d\n ", total);
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	 int i = 0;
//	for (i = 0; i<=line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ��1  3  
//		for (j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i=0; i<line; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0;j<=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j=0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i=0; i<=100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
//		//1.����i��λ��  n��λ��
//		 int n = 1;
//		 int tmp = i;
//		 int sum = 0;
//		 while (tmp /= 10)
//		 {
//			 n++;
//		 }
//		//2.����i��ÿһλ��n�η�֮�� sum
//		 tmp = i;
//		 while (tmp)
//		 {
//			 sum += pow(tmp % 10, n);
//			 tmp /= 10;
//		 }
//		//3.�Ƚ�i == sum
//		 if (i == sum)
//		 {
//			 printf("%d ", i);
//		 }
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//
//	for (i = 0; i<n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//		
//}
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);//abcdef---->fedcba
//	//������
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}
//int main()
//{
//	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char** cp[] = { c + 3, c + 2, c + 1, c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//
//
//	return 0;
//}
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//
//}* p;
////����p ��ֵΪ0x100000. ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test ���͵ı�����С��20���ֽ�
//int main()
//{
//	p =(struct Test*) 0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1,2,3,4,5, };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0; 
//}
//int main()
//{
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//3*4*4=48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));
	////4*4=16  a[0] �൱�����һ����Ϊһά�������������
	////sizeof��arr[0]������������������sizeof�����ڣ�����ĵ�һ�еĴ�С
	//printf("%d\n", sizeof(a[0]+1));
	////4 a[0]��һ�е������� ��������ʱ����Ԫ�صĵ�ַ  ��һ��Ԫ�صĵ�ַ  
	////����a[0] + 1���ǵ�һ�еڶ�����Ԫ�صĵ�ַ����ַ��4/8���ֽ�
	//printf("%d\n", sizeof(*(a[0] + 1)));4//4  ��һ�еڶ���Ԫ�ش�С��4���ֽ�
	//printf("%d\n", sizeof(a+1));
	// 4 a�Ƕ�ά�������������û��sizeof��a����Ҳû��&��a��������a����Ԫ�ص�ַ
	// ����ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У� a���ǵ�һ����Ԫ�صĵ�ַ
	// a+1���ǵڶ��еĵ�ַ 
	//printf("%d\n", sizeof(*(a + 1)));16,sizeof(a[1])������ڶ��еĴ�С��λ���ֽ�
	//printf("%d\n", sizeof(&a[0] + 1));4  �ڶ��еĵ�ַ
	//printf("%d\n", sizeof(*(&a[0] + 1)));16����ڶ��еĴ�С
	//printf("%d\n", sizeof(*a))��16a��Ԫ�ص�ַ - ��һ�еĵ�ַ *a���ǵ�һ�У�sizeof��*a�����Ǽ����һ�еĴ�С
	//printf("%d\n", sizeof(a[3]));16

	//printf("%d\n", sizeof(a));




	//char* p = "abcdef";
	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p +1));//5
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//���ֵ
	//printf("%d\n", strlen(&p + 1));//���ֵ
	//printf("%d\n", strlen(&p[0] + 1));//5






	//printf("%d\n",sizeof(p));//4/8 ����ָ������Ĵ�С
	//printf("%d\n", sizeof(p + 1));//p+1 ��������ַ�b�ĵ�ַ
	//printf("%d\n", sizeof(*p));//1 *p�����ַ������˵�һ���ַ�
	//printf("%d\n", sizeof(p[0]));//1 int arr[10]; arr[0] == *(arr+0) p[0] == *(p + 0) = �ַ�a
	//printf("%d\n", sizeof(&p));//4/8 ��ַ
	//printf("%d\n", sizeof(&p + 1));//4/8 ��ַ
	//printf("%d\n", sizeof(&p[0] + 1));//4/8  ��ַ

	//��ʼ����ʱ������ ������Ϊ��7���ַ�
	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr)); //6 &arr - ����ĵ�ַ- ����ָ�� char(*p)[7] = &arr
	//printf("%d\n", strlen(&arr +  1));//���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//5


	

	/*printf("%d\n", sizeof(arr);*/
	//7*1���ַ���С����ռ�ռ��С��sizeof��arr�������������Ĵ�С��λ���ֽڣ�7*1=7
	//printf("%d\n", sizeof(arr + 0));
	////4/8 ������ǵ�ַ�Ĵ�С ����Ԫ�ص�ַ
	//printf("%d\n", sizeof(*arr));
	////1 *arr����Ԫ�أ�sizeof��*arr������Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr[1]));
	////1  arr[1]�ǵڶ���Ԫ�أ�sizeof��arr[1]��������ǵڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&arr));
	////4/8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ������4/8���ֽ�
	//printf("%d\n", sizeof(&arr + 1));
	////4/8 &arr+1 ���������������ĵ�ַ����Ҳ�ǵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));
	////4/8  &arr[0]+1 �ڶ���Ԫ�صĵ�ַ
//	return 0;
//}


    //int main() {
	//����������Ԫ�صĵ�ַ
	//1.sizeof���������� - ��������ʾ��������
	//2.&������ - ��������ʾ��������    int a[] = {1,2,3,4};//4*4=16    printf("%d\n",sizeof(a));//16sizeof(������)-������������ܴ�С - ��λ���ֽ� - 16    printf("%d\n",sizeof(a+0));//4/84-�����������ʾ��Ԫ�ص�ֵ��a+0������Ԫ�ص�ַ����ַ�Ĵ�С����4/8�ֽڣ������Լ�ʹ�õ���32λ ����64λ��    printf("%d\n",sizeof(*a));//4/84-��������ʾ��Ԫ�ص�ַ�� *a������Ԫ�أ�sizeof��*a������4�ֽ�    printf("%d\n",sizeof(a + 1));//4/84/8-�����������ʾ��Ԫ�ص�ֵ��a+1 �ڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8�ֽ�    printf("%d\n",sizeof(a[1]));//4/84-�ڶ���Ԫ�صĴ�С    printf("%d\n",sizeof(&a));//4/84-&aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8�ֽ�    printf("%d\n",sizeof(*&a));//16/3216-&a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�    printf("%d\n",sizeof(&a+1));//4/84-&a������Ĵ�С ��&a+1 ��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8 ���ֽ�    printf("%d\n",sizeof(&a[0]));//4/8&a[0]��һ��Ԫ�صĵ�ַ    printf("%d\n",sizeof(&a[0] + 1));//4/8&a[0]+1�ڶ���Ԫ�صĵ�ַ        return  0;}

//int a[] = { 1,2,3,4 };//4*4=16
//printf("%d\n", sizeof(a));//16
//sizeof(������) - ������������ܴ�С - ��λ���ֽ� - 16
//printf("%d\n", sizeof(a + 0));//4/8
//4 - �����������ʾ��Ԫ�ص�ֵ��a + 0������Ԫ�ص�ַ����ַ�Ĵ�С����4 / 8�ֽڣ������Լ�ʹ�õ���32λ ����64λ��
//printf("%d\n", sizeof(*a));//4/8
//4 - ��������ʾ��Ԫ�ص�ַ�� * a������Ԫ�أ�sizeof�� * a������4�ֽ�
//printf("%d\n", sizeof(a + 1));//4/8
//4 / 8 - �����������ʾ��Ԫ�ص�ֵ��a + 1 �ڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С����4 / 8�ֽ�
//printf("%d\n", sizeof(a[1]));//4/8
//4 - �ڶ���Ԫ�صĴ�С
//printf("%d\n", sizeof(&a));//4/8
//4 - &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4 / 8�ֽ�
//printf("%d\n", sizeof(*&a));//16/32
//16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
//printf("%d\n", sizeof(&a + 1));//4/8
//4 - &a������Ĵ�С �� & a + 1 ��Ȼ��ַ�����������飬�����ǵ�ַ��������4 / 8 ���ֽ�
//printf("%d\n", sizeof(&a[0]));//4/8
//&a[0]��һ��Ԫ�صĵ�ַ
//printf("%d\n", sizeof(&a[0] + 1));//4/8
//&a[0] + 1�ڶ���Ԫ�صĵ�ַ
//return  0;
//}
	//�ַ�����
	//	char arr[] = { 'a','b','c','d','e','f' };


	//printf("%d\n", sizeof(arr));//6
	//sizeof������������С��6 * 1 = 6�ֽ�
	//	printf("%d\n", sizeof(arr + 0));//4/8
	//arr����Ԫ�صĵ�ַ��arr + 0������Ԫ�صĵ�ַ  ��ַ�Ĵ�С��4 / 8�ֽ�
	//	printf("%d\n", sizeof(*arr));//1
	//arr����Ԫ�صĵ�ַ��* arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
	//	printf("%d\n", sizeof(arr[1]));//1

	//printf("%d\n", sizeof(&arr));//4/8
	//&arr ��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4 / 8 ���ֽ�
	//	printf("%d\n", sizeof(&arr + 1));//4/8
	//&arr + 1���������������ĵ�ַ����ַ��С��4 / 8���ֽ�
	//	printf("%d\n", sizeof(&arr[0]) + 1);//4/8
	//�ڶ���Ԫ�صĵ�ַ



	//	�ַ�����
	//	char arr[] = { 'a','b','c','d','e','f' };

	//printf("%d\n", strlen(arr));//���ֵ
	//printf("%d\n", strlen(arr + 0)); ���ֵ
	//	//printf("%d\n", strlen(*arr));err��һ���ܷ��� �����Ǳ�����
	//	//printf("%d\n", strlen(arr[1]));err��һ���ܷ��� �����Ǳ�����  err
	//	printf("%d\n", strlen(&arr)); ���ֵ
	//	printf("%d\n", strlen(&arr + 1)); ���ֵ
	//	printf("%d\n", strlen(&arr[0] + 1)); ���ֵ



