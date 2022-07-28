//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//打印100到200之间的素数
//我的代码
//int main()
//{
//	int i = 100;
//	while (i <= 200)
//	{
//		for (int tmp =i-1;tmp!=1;tmp--)
//		{
//			if (i % tmp == 0)
//			{
//				break;
//			}
//			else if (tmp == 2)
//			{
//				printf("%d ", i);
//				break;
//			}
//		}
//		i++;
//	}
//	return 0;
//}

//老师的代码
//最优解
//#include <math.h>
//int main()
//{
//	for (int i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
