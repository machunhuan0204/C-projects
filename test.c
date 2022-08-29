#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double Pow(int n, int k)
{
	//n的k 次方
	//n*k=n* n*(k-1)
	if (k < 0)
		return(1.0 / (Pow(n, -k)));
	else if (k == 0)

		return 1;

	else
		return n*Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf_s("%d%d", &n, &k);
	double ret = Pow(n, k);
	
	printf("ret = %lf\n", ret);
	return 0;
}
////输入：1729， 输出：19
////
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else 
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret = %d \n", ret);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_string(char* arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(my_strlen(arr+1) >= 2)
//	reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//int print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位：");
//	for (i = 30; i >=0; i-=2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//
//}
//
//int main()
//{
//
//	int m = 0;
//	scanf_s("%d", &m);
//	print(m);
//	return 0;
//}
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	//return count_bit_one(tmp);
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf_s("%d %d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count = %d\n", count);
//	return 0;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int count = count_bit_one(a);
//	
//	printf("count = %d\n", count);
//	return 0;
//}
////统计二进制中1的个数
//
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i=0; i<32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//
//		}
//	}
//	/*while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}*/
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	//写一个函数求a的二进制（补码）表示中有几个1；
//	int count = count_bit_one(a);
//	//13
//	//00000000 00000000 00000000 00001101
//	printf("count = %d\n", count);
//	return 0;
//}