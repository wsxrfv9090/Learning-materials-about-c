////accept a integer number(with no sign),print everyone of it in order.
////ex: input 1234,print 1 2 3 4
//#include <stdio.h>
//
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%u", &num, 100);
//	print(num);
//	return 0;
//}
////most of the time you can use dendrogram.
////the two most important parts is as followed
////if (n > 9)
////because if there's no limit conditions the recursion can go on foever;
// 
////printf(n / 10);
////because this helps to make this recursion get closer to the limit conditions
////in order to break the loop, otherwise its fairly easy to code something that 
////is going the opposite way of the limit conditions.
////
////the purpose of these two line is to make the recusion stop in a good form.
////so these two factors of recursion is the most important
