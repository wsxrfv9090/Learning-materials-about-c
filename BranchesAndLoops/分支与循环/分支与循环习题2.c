//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////����1/1-1/2+1/3-1/4+1/5...+1/99-1/100�Ľ��
//
////int main()
////{
////	double sum1 = 0;
////	double sum2 = 0;
////	for (double i = 1; i <= 100; i += 2)
////		sum1 += 1 / i;
////	for (double i = 2; i <= 100; i += 2)
////		sum2 -= 1 / i;
////	double sum = sum1 + sum2;
////	printf("sum = %lf\n", sum);
////	return 0;
////}
//
//int main()
//{
//	double sum = 0.0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag *= -1;
//	}
//	printf("%lf\n", sum);
//}