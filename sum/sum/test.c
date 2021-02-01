#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	float V = 0;
//	float §Õ§Ý = 3.1415926;
//	float r = 0;
//	scanf("%f", &r);
//	printf("%.3f", V = (4 / 3)*§Õ§Ý*r*r*r);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c;
//	float cir, area;
//	float p = 0;
//	scanf("%f %f %f", &a, &b, &c);
//	p = (float)(a + b + c) / 2;
//	area =sqrt(p*(p - a)*(p - c)*(p - b));
//	if (a + b>c && a + c>b && b + c>a)
//	{
//		printf("circumference=%.2f area=%.2f", cir = a + b + c, area /*= sprt(p*(p - a)*(p - c)*(p - b))*/);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float high = 0;
//	float wight = 0;
//	float n = 0;
//	scanf("%f %f", &wight, &high);
//	high = (pow((high / 100), 2));
//	n = wight / high;
//	printf("%.2f", n);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	scanf("%d%d", &a, &b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d,%d", a, b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	char arr[20] = "AEIOUaeiou";
//	while (~scanf(" %c", &ch))
//	{
//
//		int i = 0;
//		while (arr[i])
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//			i++;
//		}
//		if (arr[i]=='\0')
//		{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is an alphabet.\n");
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n");
//		}
//		getchar();
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int w, l;
//	while (~scanf("%d%d", &w, &l))
//	{
//		float B;
//		B = sqrt (w / ((l / 100.0)));
//		if (B<18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (B >= 18.5 && B <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (B>27.9)
//		{
//			printf("Obese\n");
//		}
//		else
//		{
//			printf("Overweight\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float a, b;
//	char ch = 0;
//	while (~scanf("%f%c%f", &a, &ch, &b))
//	{
//		switch (ch)
//		{
//		case '+':
//			printf("%.4f+%.4f=%.4f", a, b, a + b);
//			break;
//		case '-':
//			printf("%.4f-%.4f=%.4f", a, b, a - b);
//			break;
//		case '*':
//			printf("%.4f*%.4f=%.4f", a, b, a*b);
//			break;
//		case '/':
//			if (b == 0)
//			{
//				printf("Wrong!Division by zero!\n");
//				break;
//		default:
//			printf("Invalid operation!\n");
//			break;
//			}
//			printf("%.4f/%.4f=%.4f", a, b, a / b);
//			break;
//		}
//	}
//	return 0;
//
//
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = n; i>0; i--)
//		{
//			int j = 0;
//			for (j = i; j>0; j--)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if (j + i<n-1)
//				{
//					printf(" ");
//				}
//				else
//				{
//					printf(" *");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 0; i<n; i++)
//		{
//			k = i;
//			if (i)
//			{
//				for (; k>0; k--)
//				{
//					printf(" ");
//				}
//			}
//			for (j = 0; j<n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd' };
//	char* parr = arr;
//	printf("%d\n%d", strlen(arr),strlen(parr));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i, j;
//		for (i = 0; i<n; i++)
//		{
//			for (j = 0; j<n; j++)
//			{
//				if (j == i || j == 0 || i == n-1)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int count = 0;
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 1; i<=n; i++)
//		{
//			arr[i-1] = i;
//		}
//		int j = 0;
//		for (i = 2; i<n; i++)
//		{
//			for (j = i; j<n; j++)
//			{
//				if (arr[j] % i == 0  && arr[j] != 0)
//				{
//					arr[j] = 0;
//					count++;
//				}
//			}
//		}
//		for (i = 1; i<n; i++)
//		{
//			if (arr[i])
//			{
//				printf("%d ", arr[i]);
//			}
//		}
//		printf("\n%d", count);
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	int arr1[100][100] = { 0 };
//	int arr2[100][100] = { 0 };
//	scanf("%d%d", &n, &m);
//	int i, j, count;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	printf("%.2lf", count*100.0 / (m*n));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	float n, sum;
//	for (i = 0; i<5; i++)
//	{
//		scanf("%f", &n);
//		sum += n;
//	}
//	printf("%.2f", sum / 5);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int num1, num2;
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &n);
//		if (n>0)
//		{
//			num1++;
//		}
//		if (n<0)
//		{
//			num2++;
//		}
//	}
//	printf("positive:%d\nnegative:%d\n", num1, num2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int flag1 = 1;
//	int flag2 = 1;
//	int arr[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i<n - 1; i++)
//	{
//		if (arr[i]<arr[i + 1])
//		{
//			flag1 = 0;
//		}
//		if (arr[i]>arr[i + 1])
//		{
//			flag2 = 0;
//		}
//	}
//	if (flag1 + flag2 == 1)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int ret = 0;
//	int j = 0;
//	for (i = 0; i<n; i++)
//	{
//		ret = arr[i];
//		for (j = 1; j<n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				arr[i] = 0;
//				break;
//			}
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i<m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int j = 0;
	i = 0;
	while (arr1[i] || arr2[j])
	{
		if (arr1[i]<arr2[j] && arr1[i] != 0)
		{
			printf("%d ", arr1[i]);
			i++;
		}
		else
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}
	return 0;
}