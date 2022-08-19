////Culculate the n th Fibonacci number
////The point of this example is to show that you can use both recursion and 
////Iteration to solve a problem
////some of the problems are easy for one of them, so use them properly.
//
//
////This is the fast way of doing it.
////int Fib(int n)
////{
////	int a = 1;
////	int b = 1;
////	int c = 1;
////	while (n > 2)
////	{
////		c = a + b;
////		a = b;
////		b = c;
////		n--;
////	}
////	return c;
////}
////int main()
////{
////	int n = 0;
////	scanf_s("%d", n, 1);
////	int ret = Fib(n);
////	printf("%d\n", ret);
////	return 0;
////}
////this code is doable.....but it took me 10 minutes to culculate the 50th one
// //this code is VERY inefficient
// //the problem is that recursion can be very useful and get you the answer, but the 
// //efficiency is too low
//#include <stdio.h>
////int count = 0;
//int Fib(int n)
//{
//	//if (n == 3)
//		//count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n, 1);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	/*printf("%d\n", count);*/
//	return 0;
//}
//
//
//
