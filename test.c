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
//	//ʹ��malloc����20���ֽڵĿռ�
//	//����20���ֽڵĿռ䲻������
//	//ϣ������40���ֽڵĿռ�
//	//����ʹ��realloc��������̬���ٵ��ڴ�
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

//��������
int main()
{
	//1.��NULLָ������ò���
	//int* p = malloc(40);
	//*p = 10;//malloc���ٿռ�ʧ��-��NULLָ�������
	//���������p������ص��ж�

	//2.�Զ�̬�����ڴ��Խ�����
	//int* p = (int*)malloc(40);//10��int
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i <= 10; i++)//����11����,Խ����
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

	//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
	/*int a = 10;
	int* p = &a;
	free(p);
	p = NULL;*/

	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	//ָ��p�Ѿ��ƶ��ˣ�����ͷſռ䲻����
	//	*p++ = i;
	//}
	//free(p);
	//p = NULL;

	//5.��ͬһ�춯̬�ڴ�Ķ���ͷ�
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////ʹ�ã��ͷ�
	//free(p);
	////��p=NULL;
	////...
	//free(p);
	//�������:�����Ƚ�p�ÿ�

	//6.��̬�����ڴ������ͷţ��ڴ�й¶��
	/*while (1)
	{
		malloc(1);
	}*/

	return 0;
}
