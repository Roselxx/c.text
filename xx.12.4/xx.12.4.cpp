// xx.12.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//断言
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//void my_strcpy(char* x, char* y)
//{
	//while (*y != '\0')  1方法
	//{
	//	*x = *y;
	//	x++;
	//	y++;
	//}
	//*x = *y;//'\0'交换
	/*while (*x++ = *y++)   2
	{
		;
	}*/

	/*assert(x != NULL);  3
	assert(y != NULL);

	while (*x++ = *y++)
	{
		;
	}*/

//}
//char* my_strcpy(char* x,const char* y)   4
//{
//	char* ret = x;
//	assert(x != NULL);
//	assert(y != NULL);
//	while (*x++ = *y++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "#######";
//	char arr2[] = "bit";//strcpy ：字符拷贝
//	my_strcpy(arr1, arr2);
////	printf("%s\n", arr1);   1，2，3
//	printf("%s\n", my_strcpy(arr1, arr2));   4
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//		return 0;
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
