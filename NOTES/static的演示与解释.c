#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//static��һ���÷�
//void test()
//{
//	static int a = 1;//static�����ã�����staticʱ�����������a=2������������ȥ�½�һ��a����
//	                 //��static����������2��3��4��5��6����Ϊa��һ���ֲ�����������test������a�������ڽ�����
//	                 //static��a��ɾ�̬�ľֲ�������static���ξֲ������ǣ��ֲ��������������ӳ���
//	a++;
//	printf("a=%d\n", a);
//}
//
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

//static�ڶ����÷�
//int main()
//{
//	//������ʾ�еĶ����������ļ���������
//	//exturn---�����ⲿ���ţ��ڴ��ļ��п�������
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}





//static�������÷�
//static���κ����ı��˺�������������

//extern int Add(int, int);//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//}