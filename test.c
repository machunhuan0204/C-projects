#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system() -ִ��ϵͳ����
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ�����1����֮�ڹػ���������룺��������ȡ���ػ�\n������>:");
		scanf("%s", input);
	
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
		}

	}

	return 0;
}
////��������Ϸ
////1.�����������һ������
////2.������
//void menu()
//{
//	printf("***********************\n");
//	printf("****1.  play 0.exit ***\n");
//	printf("***********************\n");
//}
//void game()
//{
//	//1.���������  rand()
//	int ret = 0;
//	int guess = 0;//���ղµ�����
//	//��ʱ����������������������ʼ��
//	//ʱ���  ��ǰ�����ʱ��-���������ʼʱ��
//		ret = rand()%100+1;//���������
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess>ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���������");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//		default:
//			printf("ѡ�����\n");
//		}
//	}
//	while(input);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	
//	//ȷ����ӡ9 ��
//	for (i=1; i<=9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i*j);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//���ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i=1; i<=sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double  sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i=1; i<=100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		 if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a=1,b=1; a<= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	 for(a=100;a<=200;a++)
//	{
//		 //
//		//�ж�a�Ƿ�Ϊ����
//		 //�жϹ���   1.�Գ���
//		 //����2->a-1
//		 int j = 0;
//		 for (j=2; j<sqrt(a); j++)
//		 {
//			 if (a % j == 0)
//			 {
//				 break;
//			 }
//		 }
//		 if (j>sqrt(a))
//		 {
//			 count++;
//			 printf("%d\n", a);
//				
//		 }
//	}
//	 printf("count =  %d\n", count);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year=1000; year<=200; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d", year);
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		
//		//�ܱ�4�������Ҳ��ܱ�100����   �����ܱ�400����
//		if (year%4==0 &&year%100!=0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if(year%400==0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//
//	}
//	printf("%d", n);
//	return 0;
//}