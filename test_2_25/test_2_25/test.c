#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	long int a = 1;
//	int b = -1;
//	printf("%d",a + b);
//	return 0;
//}




//2015年百度面试题：写一个小程序判断当前机器是大端存储还是小端存储，告诉我们当前机器的字节序是什么
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}




//优化，将程序封装成一个函数，通过调用函数来实现机器字节序的判断
//#include <stdio.h>
//int check_sys()
//{
//	int a = 1;
//	char* p = &a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int set=check_sys();
//	if (set == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//简化
//#include <stdio.h>
//int check_sys()
//{
//	int a = 1;
//	//返回1 小端
//	//返回0 大端
//	char* p = &a;
//	return *p;
//}
//int main()
//{
//	int set = check_sys();
//	if (set == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//再优化
//#include <stdio.h>
//int check_sys()
//{
//	int a = 1;
//	//返回1  小端
//	//返回0  大端
//	return *(char*)&a;
//}
//int main()
//{
//	int set=check_sys();
//	if (set == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


#include <stdio.h>
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d\nb=%d\nc=%d\n", a, b, c);

	return 0;
}