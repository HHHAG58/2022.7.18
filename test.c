#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//calloc
//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//使用malloc开辟20个字节的空间
//	//假设20个字节的空间不够用了
//	//希望开辟40个字节的空间
//	//可以使用realloc来调整动态开辟的内存
//	//int* p2 = realloc(p, 40);
//	/*int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p2 + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p2 + i));
//	}*/
//
//	int* ptr = realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//常见错误
int main()
{
	//1.对NULL指针解引用操作
	//int* p = malloc(40);
	//*p = 10;//malloc开辟空间失败-对NULL指针解引用
	//解决方法：p进行相关的判断

	//2.对动态开辟内存的越界访问
	//int* p = (int*)malloc(40);//10个int
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i <= 10; i++)//遍历11个数,越界了
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

	//3.对非动态开辟内存使用free释放
	/*int a = 10;
	int* p = &a;
	free(p);
	p = NULL;*/

	//4.使用free释放动态开辟内存的一部分
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	//指针p已经移动了，因此释放空间不完整
	//	*p++ = i;
	//}
	//free(p);
	//p = NULL;

	//5.对同一快动态内存的多次释放
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////使用，释放
	//free(p);
	////即p=NULL;
	////...
	//free(p);
	//解决方法:可以先将p置空

	//6.动态开辟内存忘记释放（内存泄露）
	/*while (1)
	{
		malloc(1);
	}*/

	return 0;
}
