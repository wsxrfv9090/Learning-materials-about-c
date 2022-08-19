//Culculate the factorial of n.
//Normal ways to do it:
////#include <stdio.h>
////int main()
////{
////	int n = 0;
////	scanf_s("%d", &n, 1);
////	int ans = 1;
////	for (int tmp = n; tmp != 0; tmp--)
////		ans *= tmp;
////	printf("%d", ans);
////	return 0;
////}
//#include <stdio.h>
//int Fac(int x)
//{
//	if (x == 1)
//		return 1;
//	else
//		return x * Fac(x - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n, 1);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}