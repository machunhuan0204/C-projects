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
//void move(int arr[], int sz)//从左边开始找一个偶数  从右边开始找一个奇数  把他们交换
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//从左边开始找一个偶数
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从右边开始找一个奇数  
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		//把他们交换
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
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
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
//	//打印上半部分
//	 int i = 0;
//	for (i = 0; i<=line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印星1  3  
//		for (j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i=0; i<line; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0;j<=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
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
//		//判断i是否为水仙花数（自幂数）
//		//1.计算i的位数  n的位数
//		 int n = 1;
//		 int tmp = i;
//		 int sum = 0;
//		 while (tmp /= 10)
//		 {
//			 n++;
//		 }
//		//2.计算i的每一位的n次方之和 sum
//		 tmp = i;
//		 while (tmp)
//		 {
//			 sum += pow(tmp % 10, n);
//			 tmp /= 10;
//		 }
//		//3.比较i == sum
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
//	//逆序函数
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
////假设p 的值为0x100000. 如下表表达式的值分别为多少？
////已知，结构体Test 类型的变量大小是20个字节
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
	////4*4=16  a[0] 相当于与第一行作为一维数组的数组名，
	////sizeof（arr[0]）把数组名单独放在sizeof（）内，计算的第一行的大小
	//printf("%d\n", sizeof(a[0]+1));
	////4 a[0]第一行的数组名 数组名此时是首元素的地址  第一个元素的地址  
	////所以a[0] + 1就是第一行第二个首元素的地址，地址是4/8个字节
	//printf("%d\n", sizeof(*(a[0] + 1)));4//4  第一行第二个元素大小是4个字节
	//printf("%d\n", sizeof(a+1));
	// 4 a是二维数组的数组名，没有sizeof（a），也没有&（a），所以a是首元素地址
	// 而二维数组看成一维数组时，二维数组的首元素是他的第一行， a就是第一行首元素的地址
	// a+1就是第二行的地址 
	//printf("%d\n", sizeof(*(a + 1)));16,sizeof(a[1])计算机第二行的大小单位是字节
	//printf("%d\n", sizeof(&a[0] + 1));4  第二行的地址
	//printf("%d\n", sizeof(*(&a[0] + 1)));16计算第二行的大小
	//printf("%d\n", sizeof(*a))；16a首元素地址 - 第一行的地址 *a就是第一行，sizeof（*a）就是计算第一行的大小
	//printf("%d\n", sizeof(a[3]));16

	//printf("%d\n", sizeof(a));




	//char* p = "abcdef";
	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p +1));//5
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值
	//printf("%d\n", strlen(&p[0] + 1));//5






	//printf("%d\n",sizeof(p));//4/8 计算指针变量的大小
	//printf("%d\n", sizeof(p + 1));//p+1 计算的是字符b的地址
	//printf("%d\n", sizeof(*p));//1 *p就是字符串夫人第一个字符
	//printf("%d\n", sizeof(p[0]));//1 int arr[10]; arr[0] == *(arr+0) p[0] == *(p + 0) = 字符a
	//printf("%d\n", sizeof(&p));//4/8 地址
	//printf("%d\n", sizeof(&p + 1));//4/8 地址
	//printf("%d\n", sizeof(&p[0] + 1));//4/8  地址

	//初始化的时候数组 我们认为有7个字符
	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr)); //6 &arr - 数组的地址- 数组指针 char(*p)[7] = &arr
	//printf("%d\n", strlen(&arr +  1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5


	

	/*printf("%d\n", sizeof(arr);*/
	//7*1个字符大小（所占空间大小）sizeof（arr）计算的是数组的大小单位是字节：7*1=7
	//printf("%d\n", sizeof(arr + 0));
	////4/8 计算的是地址的大小 是首元素地址
	//printf("%d\n", sizeof(*arr));
	////1 *arr是首元素，sizeof（*arr）是首元素的大小
	//printf("%d\n", sizeof(arr[1]));
	////1  arr[1]是第二个元素，sizeof（arr[1]）计算的是第二个元素的大小
	//printf("%d\n", sizeof(&arr));
	////4/8 &arr虽然是数组的地址，但也是地址，所以4/8个字节
	//printf("%d\n", sizeof(&arr + 1));
	////4/8 &arr+1 是跳过整个数组后的地址，但也是地址
	//printf("%d\n", sizeof(&arr[0] + 1));
	////4/8  &arr[0]+1 第二个元素的地址
//	return 0;
//}


    //int main() {
	//数组名是首元素的地址
	//1.sizeof（数组名） - 数组名表示整个数组
	//2.&数组名 - 数组名表示整个数组    int a[] = {1,2,3,4};//4*4=16    printf("%d\n",sizeof(a));//16sizeof(数组名)-计算的是数组总大小 - 单位是字节 - 16    printf("%d\n",sizeof(a+0));//4/84-数组名这里表示首元素的值，a+0还是首元素地址，地址的大小就是4/8字节（根据自己使用的是32位 还是64位）    printf("%d\n",sizeof(*a));//4/84-数组名表示首元素地址， *a就是首元素，sizeof（*a）就是4字节    printf("%d\n",sizeof(a + 1));//4/84/8-数组名这里表示首元素的值，a+1 第二个元素的地址，地址的大小就是4/8字节    printf("%d\n",sizeof(a[1]));//4/84-第二个元素的大小    printf("%d\n",sizeof(&a));//4/84-&a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8字节    printf("%d\n",sizeof(*&a));//16/3216-&a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节    printf("%d\n",sizeof(&a+1));//4/84-&a是数组的大小 ，&a+1 虽然地址跳过整个数组，但还是地址，所以是4/8 个字节    printf("%d\n",sizeof(&a[0]));//4/8&a[0]第一个元素的地址    printf("%d\n",sizeof(&a[0] + 1));//4/8&a[0]+1第二个元素的地址        return  0;}

//int a[] = { 1,2,3,4 };//4*4=16
//printf("%d\n", sizeof(a));//16
//sizeof(数组名) - 计算的是数组总大小 - 单位是字节 - 16
//printf("%d\n", sizeof(a + 0));//4/8
//4 - 数组名这里表示首元素的值，a + 0还是首元素地址，地址的大小就是4 / 8字节（根据自己使用的是32位 还是64位）
//printf("%d\n", sizeof(*a));//4/8
//4 - 数组名表示首元素地址， * a就是首元素，sizeof（ * a）就是4字节
//printf("%d\n", sizeof(a + 1));//4/8
//4 / 8 - 数组名这里表示首元素的值，a + 1 第二个元素的地址，地址的大小就是4 / 8字节
//printf("%d\n", sizeof(a[1]));//4/8
//4 - 第二个元素的大小
//printf("%d\n", sizeof(&a));//4/8
//4 - &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4 / 8字节
//printf("%d\n", sizeof(*&a));//16/32
//16 - &a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
//printf("%d\n", sizeof(&a + 1));//4/8
//4 - &a是数组的大小 ， & a + 1 虽然地址跳过整个数组，但还是地址，所以是4 / 8 个字节
//printf("%d\n", sizeof(&a[0]));//4/8
//&a[0]第一个元素的地址
//printf("%d\n", sizeof(&a[0] + 1));//4/8
//&a[0] + 1第二个元素的地址
//return  0;
//}
	//字符数组
	//	char arr[] = { 'a','b','c','d','e','f' };


	//printf("%d\n", sizeof(arr));//6
	//sizeof计算机的数组大小，6 * 1 = 6字节
	//	printf("%d\n", sizeof(arr + 0));//4/8
	//arr是首元素的地址，arr + 0还是首元素的地址  地址的大小是4 / 8字节
	//	printf("%d\n", sizeof(*arr));//1
	//arr是首元素的地址，* arr就是首元素，首元素是字符大小是一个字节
	//	printf("%d\n", sizeof(arr[1]));//1

	//printf("%d\n", sizeof(&arr));//4/8
	//&arr 虽然是数组的地址，但还是地址，地址大小是4 / 8 个字节
	//	printf("%d\n", sizeof(&arr + 1));//4/8
	//&arr + 1是跳过整个数组后的地址，地址大小是4 / 8个字节
	//	printf("%d\n", sizeof(&arr[0]) + 1);//4/8
	//第二个元素的地址



	//	字符数组
	//	char arr[] = { 'a','b','c','d','e','f' };

	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr + 0)); 随机值
	//	//printf("%d\n", strlen(*arr));err不一定能访问 程序是崩溃的
	//	//printf("%d\n", strlen(arr[1]));err不一定能访问 程序是崩溃的  err
	//	printf("%d\n", strlen(&arr)); 随机值
	//	printf("%d\n", strlen(&arr + 1)); 随机值
	//	printf("%d\n", strlen(&arr[0] + 1)); 随机值



