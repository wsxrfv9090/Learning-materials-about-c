//Culculate the sum of every number with in a big number.
//Code a function called DigitSum(n), input a non - minus integer, and return the sum of
//the numbers consist it.
#include <stdio.h>
int DigitSum(int x)
{
	if (DigitSum(x / 10) != 0)
		return (x % 10 + DigitSum(x / 10));
}
int main()
{
	int num = 2459;
	printf("%d", DigitSum(num));
	return 0;
}