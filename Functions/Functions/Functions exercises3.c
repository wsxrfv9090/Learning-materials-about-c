////Use recursion to culculate the k power of n
//
//#include <stdio.h>
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1 / (n * Pow(n, -k - 1));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d %d", &n, &k, 1, 1);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}