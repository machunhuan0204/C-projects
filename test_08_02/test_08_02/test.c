#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>

//�ṹ��
// char int 
// ��3.14��
// ��-���Ӷ���
// ���� ���  ����  ʡ��֤��
// ���Ӷ���--�ṹ��--�Լ����������
 
struct Book
{
	char name[20];//C���Գ������
	short price;//55

};
int main()
{
	//���ýṹ�����ʹ���һ�����͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };
	strcpy(b1.name, "C++") ;//strcpy---string  copy--�ַ�������-�⺯��string.h
	printf("%s\n", b1.name);
							//struct Book* pd = &b1;
	//����PD��ӡ���ҵ������ͼ۸�
	//�ṹ���������Ա
	//->�ṹ��ָ��->��Ա
	/*printf("%s\n", pd->name);
	printf("%d\n", pd->price);*/
	/*printf("%s\n", (,*pd).name);
	printf("%d\n", (*pd).price);*/
	/*printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);*/


	return 0;

}
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;//32-4    64-8
//	printf("%d\n", sizeof(pd));
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//int a = 10;//����4���ֽڵĿռ�
//	//int* p = &a;//P��һ������ָ�����
//	//printf("%p\n", p);
//	return 0;
//	//*P�����ò���������ӷ��ʲ�����
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
//	int *p = &a;//ȡ��ַa
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
//	static int a = 1;//a�Ǿ�̬�ľֲ�����
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
//	//arr[4];//�±����ò�����
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
//	int b = a++;//ǰ�üѼ����ȣ��ٸ�ֵ�����üѼ����ȸ�ֵ�ټӼ�
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
//		printf("�ϴ�ֵ�ǣ�%d", num1);
//	else
//		printf("�ϴ�ֵ�ǣ�%d", num2);
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
//	printf("���뻪\n");
//
//	while (line<20000)
//	{
//	printf("��һ�д���: %d\n", line);
//	line++;
//	}
//	if(line>=2000)
//		printf("�ù���");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("������Ѷ\n");
//	printf("��Ҫ�ú�ѧϰ��");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("�ù���");
//	else
//		printf("���ع�");
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
