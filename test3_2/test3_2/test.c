#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void move(int n, char pos1, char pos3)
{
    //��ӡ�ƶ��Ĺ���
    // 1����������С������
    // 2�����м�λ�õ�����
    // 3����������������
    printf("����%d: �� %c�� �ƶ��� %c��\n", n, pos1, pos3);

}

void Hanoi(int n, char pos1, char pos2, char pos3)
{
    //�����1�����ӣ�ֱ�Ӵ���ʼ��A�ƶ���Ŀ����C
    if (n == 1) 
    {
        move(n, pos1, pos3);
    }
    else
    {
        //������Ӵ���1������Ҫ��n-1�����ӣ�����ʼ��pos1��ͨ��Ŀ����pos3���ƶ�����ת��pos2
        Hanoi(n-1, pos1, pos3, pos2); 

        //��ʱpos1�ϵ�n-1������ȫ���ƶ�pos2��ȥ�ˣ���ô����ֱ�Ӱ�pos1��ʣ�µ�1�����ӣ�ֱ���ƶ���pos3��
        move(n, pos1, pos3);

        //��pos2ʣ�µ�n-1�����ӣ�ͨ����תλ��pos1���ƶ���Ŀ��λ��pos3
        Hanoi(n-1, pos2, pos1, pos3);
    }
}

int main()
{
    //���Ӹ���
    int n = 3;

    //��ʼ��A
    char pos1 = 'A';

    //��ת��B
    char pos2 = 'B';

    //Ŀ����C
    char pos3 = 'C';

    printf("�ƶ�%d�����ӵĲ������¡�\n", n);

    //��ŵ������
    Hanoi(n, pos1, pos2, pos3);

    return 0;
}