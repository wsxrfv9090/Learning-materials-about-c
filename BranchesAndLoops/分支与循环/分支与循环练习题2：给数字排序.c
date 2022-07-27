//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
// 自己写的：
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (c > a)
//			printf("%d > %d > %d", c, a, b);
//		else if (b > c)
//			printf("%d > %d > %d", a, b, c);
//		else
//			printf("%d > %d > %d", a, c, b);
//	}
//	else if (b > a)
//	{
//		if (c > b)
//			printf("%d > %d > %d", c, b, a);
//		else if (a > c)
//			printf("%d > %d > %d", b, a, c);
//		else
//			printf("%d > %d > %d", b, c, a);
//	}
//	return 0;
//}


//老师写的：
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d > %d > %d", a, b, c);
//	return 0;
//}