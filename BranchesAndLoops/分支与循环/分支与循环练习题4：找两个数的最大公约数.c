//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////int main()
////{
////	//我的代码
////	int a, b;
////	scanf("%d%d", &a, &b);
////	int min;
////	for (min = (a < b ? a : b);min != 0; min--)
////	{
////		if (a % min == 0 && b % min == 0)
////		{
////			printf("the number is %d", min);
////			break;
////		}
////	}
//	//（老师的代码）//while(1)
//	//{
//	//	if (a % min == 0 && b % min == 0)
//	//	{
//	//		printf("the number is %d", min);
//	//		break;
//	//	}
//	//	min--;
//	//}
////	return 0;
////}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	while (1)
//	{
//		int tmp = m % n;
//		if (tmp == 0)
//		{
//			printf("the number is %d", n);
//			break;
//		}
//		else
//		{
//			m = n;
//			n = tmp;
//		}
//	}
//	return 0;
//}
//
////
////int main()
////{
////	int m = 0;
////	int n = 0;
////	scanf("%d%d", &m, &n);
////	int t = 0;
////	while (t = m % n);
////	{
////		m = n;
////		n = t;
////	}
////	printf("the number is %d", n);
////	return 0;
////}