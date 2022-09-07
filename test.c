#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <string.h>
#include <assert.h>

struct T
{
	double weight;
	short age;
};
struct S
{
	char c;
	struct T st;
	int a;
	double d;
	char arr[20];
};
int main()
{
	//struct S s = {'c', 100, 3.14, "hello bit"};
	struct S s = { 'c', {50.2, 23}, 100, 3.14, "hello bit\n" };
	printf("%c %d %lf %s", s.c, s.a, s.d, s.arr);
	printf("%lf\n %d\n ", s.st.weight, s.st.age);
	return 0;
}
//结构体自引用
//struct Node
//{
//	int data;
//	//struct Node n;//完全不是正确的
//	struct Node* next;//4/8
//};
//int main()
//{
//
//	return 0;
//}
//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量
//描述学生：属性-名字+电话+性别+年龄
//struct Stu
//{
//	char name[20];//名字
//	char tele[12];
//	char sex[10];
//	int age;
//
// }s4, s5, s6;
//struct Stu s3;//全局变量
//int main()
//{
//	//创建局部变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}
//int main()
//{
//	//VS20
//	// >   1
//	// ==  0
//	// <  -1
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);
//	//比较两个字符串的大小
//	printf("%d\n", ret);
//
//	return 0;
//}
//int is_left_move(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	//1.str1字符串中追加一个字符串
//	// strcat
//	//  strcat(str1, str1);
//	strncat(str1, str1, 6);
//	
//	//2.判断str2指向难过的字符串是否是str1指向的字符串的字串
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else 
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
//
////三bu翻转法
////ab cdef
////ba fedc  先左再右 最后整体
////cdefab
//
////逆序字符串函数
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//}
//left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr+k-1);//逆序左边
//	reverse(arr+k, arr+len-1);//逆序右边
//	reverse(arr, arr+len-1);//逆序整体
//}
////int is_left_move(char* s1, char* s2)
////{
////	int len = strlen(s1);
////	int i = 0;
////	for (i = 0; i < len; i++)
////	{
////		left_move(s1, 1);
////		int ret = strcmp(s1, s2);
////		if (ret == 0)
////			return 1;
////	}
////	return 0;
////}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
////int main()
////{
////	char arr[] = "abcdef";
////	left_move(arr, 2);
////	printf("%s\n", arr);
////	return 0;
////}
//////暴力求解法
////void left_move(char* arr, int k)
////{
////	assert(arr != NULL);
////	int i = 0;
////	int len = strlen(arr);
////	for (i= 0;i<k; i++)
////	{
////		//左旋转一个字符
////		//1
////		char tmp = *arr;
////		//2
////		int j = 0;
////		for (j=0; j < len-1; j++)
////		{
////			*(arr + j) = *(arr + j + 1);
////
////		}
////		//3
////		*(arr + len - 1) = tmp;
////	}
////}
////int main()
////{
////	char arr[] = "abcdef";
////	left_move(arr, 2);
////	printf("%s\n", arr);
////	return 0;
////}