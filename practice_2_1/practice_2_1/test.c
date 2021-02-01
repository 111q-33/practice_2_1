#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int count = 0;
void move(char src, char dst)
{
	printf("%c->%c\n", src, dst);
	count++;
}
void hanoit(int n, char src, char jiezhi, char dst)
{
	if (n == 1)
	{
		move(src, dst);
	}
	else
	{
		hanoit(n - 1, src, dst, jiezhi);
		move(src, dst);
		hanoit(n - 1, jiezhi, src, dst);
	}

}
int main()
{
	hanoit(3, 'A', 'B', 'C');
	printf("%d\n", count);
	return 0;
}
//int my_strlen(char* n)
//{
//	int count = 0;
//	while (*n != '\0')
//	{
//		n++;
//		count++;
//	}
//	return count;
//}
//char * my_strcpy(char * a, char * b)
//{
//	char * ret = a;
//	while (*a++ = *b++)
//	{
//		;
//	}
//	return ret;
//}
void rev(int *arr, int sz)
{
	int a = 0;
	int i = 0;
	int even = 0;
	int n = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] % 2 == 0)
			even++;
	}
	while (even)
	{
		if (arr[a] % 2 == 0)
		{
			int tmp = arr[a];
			for (i = a; i <= sz - n - 2; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr[sz - n - 1] = tmp;
			even--;
			n++;
		}
		else
			a++;
	}
}
int main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	rev(arr, sz);
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	/*char a[] = "abcdef";
	char c[] = "abcdef";
	char b[] = "ghde";
	strcpy(a, b);
	my_strcpy(c, b);
	printf("%s\n%s\n",a,c);*/
	/*printf("%d\n", my_strlen("abcdef"));*/
	//int i = 0;
	//int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//for(i=0; i<=12; i++)
	//{
	//    arr[i] = 0;
	//    printf("hello bit\n");
	//}

	return 0;
}