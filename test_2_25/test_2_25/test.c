#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	long int a = 1;
//	int b = -1;
//	printf("%d",a + b);
//	return 0;
//}




//2015��ٶ������⣺дһ��С�����жϵ�ǰ�����Ǵ�˴洢����С�˴洢���������ǵ�ǰ�������ֽ�����ʲô
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}




//�Ż����������װ��һ��������ͨ�����ú�����ʵ�ֻ����ֽ�����ж�
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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}



//��
//#include <stdio.h>
//int check_sys()
//{
//	int a = 1;
//	//����1 С��
//	//����0 ���
//	char* p = &a;
//	return *p;
//}
//int main()
//{
//	int set = check_sys();
//	if (set == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}



//���Ż�
//#include <stdio.h>
//int check_sys()
//{
//	int a = 1;
//	//����1  С��
//	//����0  ���
//	return *(char*)&a;
//}
//int main()
//{
//	int set=check_sys();
//	if (set == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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